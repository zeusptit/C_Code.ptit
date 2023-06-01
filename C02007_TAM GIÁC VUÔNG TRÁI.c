#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,t;
    scanf("%d",&n);
    t=1;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=t;k++) printf("*");
            if(t<=n) t++;
        printf("\n");
    }
}
