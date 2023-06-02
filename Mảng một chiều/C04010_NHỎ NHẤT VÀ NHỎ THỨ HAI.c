#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int A[100],min,i;
    for(i=0;i<n;i++)scanf("%d",&A[i]);
    min = A[0];
    for(i=1;i,i<n;i++)if(A[i]<=min)min=A[i];
    int nmin=99;
    for(i=0;i<n;i++)if(A[i] <= nmin && min < A[i])nmin = A[i];
    printf("%d %d",min,nmin);
}
