#include <stdio.h>
#include <stdlib.h>

int main()
{
    int test;
    scanf("%d",&test);
    int t = 1;
    while(test--)
    {
        int N,M,p;
        scanf("%d%d%d",&N,&M,&p);
        int a[100],b[100],i,j;
        for(i=0;i<N;i++)scanf("%d",&a[i]);
        for(j=0;j<M;j++)scanf("%d",&b[j]);
        printf("Test %d:\n",t);
        for(i=0;i<p;i++)printf("%d ",a[i]);
        for(j=0;j<M;j++)printf("%d ",b[j]);
        for(i=p;i<N;i++)printf("%d ",a[i]);
        printf("\n");
        t++;
    }
}
