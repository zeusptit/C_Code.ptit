#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned n,t;
    scanf("%u",&n);
    t=n;
    for(int j=1;j<=n;j++){
        if(t>0){
            t--;
            for(int i=1;i<=t;i++){
                printf("~");
            }
        }
        for(int k=1;k<=n;k++){
            if(j==1||j==n) printf("*");
            else if (k==1||k==n)printf("*");else printf(".");
        }
        printf("\n");
    }
}
