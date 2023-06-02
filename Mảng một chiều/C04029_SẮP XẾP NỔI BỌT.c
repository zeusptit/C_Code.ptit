#include <stdio.h>
#include <math.h>
void swap(int *x,int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
int main(){
	int n;
	scanf("%d",&n);
	int A[100];
	int i,j;
	for(i=0;i<n;i++)scanf("%d",&A[i]);
	int t=1;
	for(i=0;i<n-1;i++)
	{
	    int kt = 1;
	    for(j=0;j<n-i-1;j++)
	    {
	        if(A[j] > A[j+1])
	        {
	            swap(&A[j],&A[j + 1]);
	            kt = 0;
	        }
	    }
	    if(kt == 0)
	    {
	        printf("Buoc %d: ",t);
	        for(int k=0;k<n;k++)printf("%d ",A[k]);
	    }
	    else break;
	    t++;
	    printf("\n");
	}
	return 0;
}
