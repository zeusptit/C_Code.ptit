#include <stdio.h>
#include <math.h>
#include <string.h>
const float pi = 3.141592653589793;

long long GCD(long long m,long long n)
{
    if(m == 0)return n;
    if(n == 0)return m;
    long long temp;
    while(n != 0)
    {
        temp = m % n;
        m = n;
        n = temp;
    }
    return m;
}
void rutgon(long long *t,long long *m)
{
    long long gcd2 = GCD(*t,*m);
    *t = *t / gcd2;
    *m = *m / gcd2;
}
int main()
{
    int test;
    scanf("%d",&test);
    int t = 1;
    while(test--)
    {
        long long t1,m1,t2,m2;
        scanf("%lld%lld%lld%lld",&t1,&m1,&t2,&m2);
        rutgon(&t1,&m1);
        rutgon(&t2,&m2);
        long long gcd = GCD(m1,m2);
        long long lcm = m1 * m2 / gcd;
        printf("Case #%d:\n",t);
        t1 = t1 * (lcm / m1);
        t2 = t2 * (lcm / m2);
        long long gcd1 = GCD(t1,t2);
        printf("%lld/%lld %lld/%lld\n",t1,lcm,t2,lcm);
        printf("%lld/%lld\n",t1+t2,lcm);
        printf("%lld/%lld\n",t1/gcd1,t2/gcd1);
        t++;
    }
    return 0;
}
