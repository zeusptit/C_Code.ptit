#include <stdio.h>
#include <stdlib.h>
long long gcd(long long m,long long n)
{
    int temp;
    while(n!=0)
    {
        temp=m%n;
        m=n;
        n=temp;
    }
    return m;
}
int main()
{
   int test;
   scanf("%d",&test);
   while(test--)
   {
       long long m,n;
       scanf("%lld%lld",&m,&n);
       long long lcm;
       lcm=m*n/gcd(m,n);
       printf("%lld %lld",lcm,gcd(m,n));
       printf("\n");
   }
}
