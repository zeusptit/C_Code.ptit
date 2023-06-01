#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,t;
    scanf("%d""%d",&m,&n);
    for(int i=1;i<=m;i++)
    {
        if(i<=n)
        {
            for(int j=i;j<=n;j++)printf("%d",j);
            for(int k=i-1;k>0;k--)printf("%d",k);
            printf("\n");
        }else
        {
            printf("%d",i);
            for(int k=n-1;k>0;k--)printf("%d",k);
            printf("\n");
        }
    }
}
