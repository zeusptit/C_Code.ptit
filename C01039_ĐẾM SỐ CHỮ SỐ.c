#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n,t,ssh;
    scanf("%lld",&n);
    t=0;
    while(n>=10){
        n=n/10;
        t++;
    }
    ssh=t+1;
    printf("%lld",ssh);
}
