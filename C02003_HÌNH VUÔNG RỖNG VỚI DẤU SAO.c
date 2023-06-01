#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n,m;
    scanf("%d",&n);
    m=n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i==1||i==m) printf("*");
            else if (j==1||j==n) printf("*");else printf(".");
        }
        printf("\n");
    }
}
