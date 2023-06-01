#include <stdio.h>
#include <stdlib.h>

int main()
{
    int test,a,scc,t;
    unsigned long long int n;
    scanf("%d",&test);
    while(test--){
        scanf("%llu",&n);
        scc=n%10;
        t=1;
        while(n!=0){
            if(n%10<=scc){
                scc=n%10;
                n=n/10;
            }else{
                t=0;
                break;
            }
        }
        if(t==1){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}
