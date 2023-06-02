#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int Pn(int n)
{
    if(n<2)return 0;
    for(int i=2;i<=sqrt(n);i++)if(n%i==0)return 0;
    return 1;
}
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        int dem=0,t=2;
        printf("%d = ",n);
        while(n>1)
        {
            while(Pn(t)==1&&n%t==0)
            {
                n=n/t;
                dem++;
                if(n%t!=0)if(n>1)printf("%d^%d * ",t,dem);else printf("%d^%d",t,dem);
            }
            t++;
            dem=0;
        }
        printf("\n");
    }
}
