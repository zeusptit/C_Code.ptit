#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

char rev( char *x)
{
    int temp,l=strlen(x);
    for(int i=0;i<l/2;i++)
    {
        temp = x[i];
        x[i] = x[l-i-1];
        x[l-i-1] = temp;
    }
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
        if(strlen(s1)>strlen(s2))
        {
            char temp[1001];
            strcpy(temp,s1);
            strcpy(s1,s2);
            strcpy(s2,temp);
        }
        
        int l1 = strlen(s1),l2 = strlen(s2);
        char d[10];
        strcpy(d,"0");
        rev(s1);
        while(strlen(s1)<l2)
        {
            strcat(s1,d);
        }
        rev(s1);
        int tmp=0;
        char res[1002];
        int t=0;
        for(int i=l2-1;i>=0;i--)
        {
            int k = s1[i] + s2[i] - 48 - 48 + tmp;
            if(k>9)
            {
                tmp = 1;
                res[t++] = k%10 + 48;
            }else{
                tmp = 0;
                res[t++] = k + 48;
            }
        }
        if(tmp == 1)res[t++] = 1 + 48;
        for(int i=t-1;i>=0;i--)printf("%c",res[i]);
        printf("\n");
    }
    return 0;
}
