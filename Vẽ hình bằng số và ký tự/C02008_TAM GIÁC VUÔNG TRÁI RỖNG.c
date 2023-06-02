#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,t;
    scanf("%d",&n);
    int i,k;
    for( i=1;i<=n;i++)
    {
        for( k=1;k<=i;k++)
        {
            if(i==n||k==1||k==i)printf("*");else printf(".");
        }
        printf("\n");
    }
}
