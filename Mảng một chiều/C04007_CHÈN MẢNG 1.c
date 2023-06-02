#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int A[100],B[100],i,j;
    for(i=0;i<a;i++)scanf("%d",&A[i]);
    for(j=0;j<b;j++)scanf("%d",&B[j]);
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++)printf("%d ",A[i]);
    for(j=0;j<b;j++)printf("%d ",B[j]);
    for(i=n;i<a;i++)printf("%d ",A[i]);
}
