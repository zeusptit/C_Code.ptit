#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int A[1000],i;
    for(i=0;i<n;i++)scanf("%d",&A[i]);
    for(i=0;i<n;i++)if(A[i] % 2 == 0)printf("%d ",A[i]);
    printf("\n");
    for(i=0;i<n;i++)if(A[i] % 2 != 0)printf("%d ",A[i]);
}
