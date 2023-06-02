#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,t;
    scanf("%d",&n);
    t=n-1;
    int m=1;
    while(t>=0)
    {
        for(int i=1;i<=t;i++)printf("~");
        t--;
        if(m<=n)
            for(int j=1;j<=m;j++) printf("*");
            m++;
        printf("\n");
    }
}
