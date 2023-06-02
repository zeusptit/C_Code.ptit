#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int factorial(int n)
{
    if(n==0||n==1)return 1;
    return n*factorial(n-1);
}
int sum(int m)
{
    int s=0,p=m;
    while(m>0)
    {
        s=s+factorial(m%10);
        m=m/10;
    }
    if(s==p)return 1;
    return 0;
}
int main()
{
    long long n;
    scanf("%lld",&n);
    int t=1;
    while(t<=n)
    {
        if(sum(t)==1)printf("%d ",t);
        t++;
    }
}
