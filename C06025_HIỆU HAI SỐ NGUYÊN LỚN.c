#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

char rev( char *x)
{
    int temp,l = strlen(x);
    for(int i=0;i<l/2;i++)
    {
        temp = x[i];
        x[i] = x[l - i - 1];
        x[l - i - 1] = temp;
    }
}
void solve (char *x)
{
    int length = strlen(x);
    for(int i=0;i<length;i++)
    {
        x[i] = x[i + 1];
        if(i == length - 1)
        {
            x[length - 1] = '\0';
            length--;
        }
    }
}
void swap(char *x1,char *x2)
{
    char temp[1000];
    strcpy(temp,x1);
    strcpy(x1,x2);
    strcpy(x2,temp);
}
void plus(char *x1,char *x2, char *r,int *q)
{
    int tmp = 0,t = 0;
    int l = strlen(x2);
    for(int i=l-1;i>=0;i--)
    {
        int k = x1[i] + x2[i] - 48 - 48 + tmp;
        if(k>9)
        {
            tmp = 1;
            r[t++] = k%10 + 48;
        }else {
            tmp=0;
            r[t++] = k + 48 ;
        }
    }
    *q=t;
}
void subtract(char *x1,char *x2, char *r,int *q)
{
    int tmp = 0,t = 0;
    int l = strlen(x2);
    for(int i=l-1;i>=0;i--)
    {
        int k = -x1[i] + x2[i] + tmp;
        if(k<0)
        {
            tmp = -1;
            r[t++] = (k+10)%10 + 48;
        }else {
            tmp=0;
            r[t++] = k + 48 ;
        }
    }
    *q=t;
}
int main()
{
    int test;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        char s1[1001],s2[1001];
        scanf("%s%s",s1,s2);
        if(strlen(s1)>strlen(s2))swap(s1,s2);
        int th1=0,th2=0,th3=0;
        if(s1[0] == '-')
        {
            solve(s1);
            th1=1;
        }
        if(s2[0] == '-')
        {
            solve(s2);
            th2=1;
        }
        int l1 = strlen(s1),l2 = strlen(s2);
        /*
            th1: a<0 b<0  b-a
            th2: a<0 b>0  b+a
            th3: a>0 b>0  b-a
        */
        int tmp=0;
        char res[1002];
        int t=0;
        int kt=0;
        if(l1<l2)
        {
            char d[10];
            strcpy(d,"0");
            rev(s1);
            while(strlen(s1)<l2)
            {
                strcat(s1,d);
            }
            rev(s1);
            if(th1 == 1 && th2 == 0)plus(s1,s2,res,&t);
            else if(th1 == 0 && th2 == 1)plus(s1,s2,res,&t);
            else subtract(s1,s2,res,&t);
        }else{
            for(int i=0;i<=l2;i++)
            {
                if(s1[i] > s2[i])
                {
                    kt = 1;
                    break;
                }
            }
            if(kt == 1)swap(s1,s2);
            subtract(s1,s2,res,&t);
        }
        int j=t-1;
        if(res[t-1] == '0')
        {
            for(int i=t-1;i>=0;i--)
            {
                if(res[i] != '0') 
                {
                    j=i;
                    break;
                }
            }
        }
        for(int i=j;i>=0;i--)printf("%c",res[i]);
        printf("\n");
    }
    return 0;
}
