#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Pn(long long n)
{
    if(n < 2)return 0;
    for(int i=2;i<=sqrt(n);i++)if(n % i == 0)return 0;
    return 1;
}

long long uoc(long long m)
{
    long long x;
    for(int j=1;j<=sqrt(m);j++)
    {
        if(m % j == 0)
        {
            if(Pn(m / j) == 1)return m / j;
            else if(Pn(j) == 1)x = j;
        }
    }
    return x;
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int test;
    scanf("%d",&test);
    while(test--)
    {
        long long n;
        scanf("%lld",&n);
        printf("%lld\n",uoc(n));
    }
    return 0;
}
