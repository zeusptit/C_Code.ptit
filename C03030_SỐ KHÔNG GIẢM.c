#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define test int t; scanf("%d",&t);while(t--)
int kt(int n)
{
    int k,t=0;
    while(n>0)
    {
        k=n%10;
        n=n/10;
        if(k<n%10)t++;
    }
    if(t>0)return 0;else return 1;
}
int main()
{
    test
    {
        int n;
        scanf("%d",&n);
        int m=pow(10,n-1);
        while(m<=pow(10,n)-1)
        {
            if(kt(m)==1)printf("%d ",m);
            m++;
        }
        printf("\n");
    }
}
