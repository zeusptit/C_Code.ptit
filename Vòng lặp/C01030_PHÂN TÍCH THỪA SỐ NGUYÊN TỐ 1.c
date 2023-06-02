#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,test;
    scanf("%d",&test);
    while(test--){
        scanf("%d", &n);
        for(int i = 2; i <= n; i++){
            while(n%i==0){
                printf("%d ",i);
                n=n/i;
                if(n==1)
                    break;
            }
        }
        printf("\n");
    }
}


