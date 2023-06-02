#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    long long n,S,test,sd,sc;
    int a;
    scanf("%lld",&test);
    while(test--){
        scanf("%lld",&n);
        S=0;
        sc=n%10;
        while(n>0){
            a=n%10;
            n=n/10;
        }
        sd=a;
        if(sd==sc){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}
