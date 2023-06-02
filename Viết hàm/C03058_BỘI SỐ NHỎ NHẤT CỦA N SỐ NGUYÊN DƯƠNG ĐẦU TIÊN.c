#include <stdio.h>
#include <math.h>

long long LCM(long long m,long long n)
{
    long long temp;
    long long p = m,q = n;
    while(n != 0)
    {
        temp = m % n;
        m = n;
        n = temp;
    }
    long long b = p * q / m;
    return b;
}
int main(){
    int test;
    scanf("%d",&test);
    while(test--)
    {
        long long n;
        scanf("%lld",&n);
        long long lcm = 1;
        long long i = 1;
        while(i <= n)
        {
            lcm = LCM(i,lcm);
            i++;
        }
        printf("%lld\n",lcm);
    }
    return 0;
}
