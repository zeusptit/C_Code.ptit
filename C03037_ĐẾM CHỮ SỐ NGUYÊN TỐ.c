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
    long long n;
    scanf("%lld",&n);
    long long p=n;
    int k,dem=0;
    for(int j=2;j<=9;j++)
    {
        while(p>0)
        {
            k=p%10;
            p=p/10;
            if(k==j&&Pn(k)==1)dem++;
        }
        if(dem>0)printf("%d %d\n",j,dem);;
        dem=0;
        p=n;
    }
}
