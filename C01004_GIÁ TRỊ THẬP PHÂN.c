#include <stdio.h>
#include <stdlib.h>

int main()
{
    int test;
    scanf("%d",&test);
    while(test--){
        long long n;
        scanf("%lld",&n);
        printf("%.15lf\n",(double)1/n);
    }
}
