#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sochuso(long long n)
{
    int t=0;
    while(n > 0)
    {
        n = n / 10;
        t++;
    }
    return t;
}
int Pn(int m)
{
   if(m < 2)return 0;
   for(int i=2;i<=sqrt(m);i++)if(m % i == 0)return 0;
   return 1;
}

int main(int argc, char *argv[]) {
    long long n;
    scanf("%lld",&n);
    int t = sochuso(n);
    int a[100]; 
    while(n > 0)
    {
        for(int i=0;i<t;i++)
        {
            a[i] = n % 10;
            n = n / 10;
        }
    }
    int b[100] = {0};
    for(int i=0;i<t;i++)b[a[i]]++;
    for(int i=t-1;i>=0;i--)
    {
        if(Pn(a[i]) == 1 && b[a[i]] >= 1)printf("%d %d\n",a[i],b[a[i]]);
        b[a[i]] = 0;
    }
    return 0;
}
