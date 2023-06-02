#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int max(int x,int y)
{
    if(x >= y)return x;
    else return y;
}
int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    long long min1 = 1000000,min2 = 1000000;
    while(n--)
    {
        long long a,b;
        scanf("%lld%lld",&a,&b);
        if(a < min1)
        {
            min1 = a;
        }
        if(b < min2)
        {
            min2 = b;
        }
    }
    printf("%lld",min1 * min2);
    return 0;
}
