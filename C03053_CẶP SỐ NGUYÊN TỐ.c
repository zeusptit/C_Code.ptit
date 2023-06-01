#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int Pn(int n)
{
    if(n<2)return 0;
    for(int i=2;i<=sqrt(n);i++)if(n%i==0)return 0;
    return 1;
}
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        for(int j=2;j<=n;j++)if(Pn(j)==1&&Pn(n-j)==1&&j<=n-j)printf("%d %d ",j,n-j);
        printf("\n");
    }
}
