#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int dt[10000],cnt=0;
void xuli(char x[])
{
    for(int i=0;i<strlen(x);i++)
    {
        if(isdigit(x[i]))
        {
            int temp = 0;
            while(x[i] != '*')
            {
                temp = temp * 10 + x[i] - '0';
                ++i;
            }
            i += 3;
            int mu = 0;
            while(isdigit(x[i]))
            {
                mu = mu * 10 + x[i] - '0';
                ++i;
            }
            dt[mu] += temp;
        }
    }
}
int main()
{
    int test;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        char s1[10000],s2[10000];
        gets(s1);
        gets(s2);
        memset(dt,0,sizeof(dt));
        cnt = 0;
        xuli(s1);xuli(s2);
        for(int i=10000;i>=0;i--)if(dt[i])++cnt;
        for(int i=10000;i>=0;i--)
        {
            if(dt[i] != 0)
            {
                printf("%d*x^%d",dt[i],i);
                --cnt;
                if(cnt != 0)printf(" + ");
            }
        }
        printf("\n");
    }
    return 0;
}
/*
1
3*x^8 + 7*x^2 + 4*x^0
11*x^6 + 9*x^2 + 2*x^1 + 3*x^0
*/
