#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void sapxep(int A[100],int n)
{
	int i,j;
	for(i=0;i<n;i++)
		for(j=i;j<n;j++)
		{
			if(A[i] >= A[j])
			{
				int temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
}
void swap(int B[100],int n)
{
    int i;
    for(i=0;i<n/2;i++)
    {
        int temp = B[i];
        B[i] = B[n - i - 1];
        B[n - i - 1] = temp;
    }
}
int main(int argc, char *argv[]) {
	int test;
	scanf("%d",&test);
	int T = 1;
	while(test--)
	{
		int n;
		scanf("%d",&n);
		int A[100],B[100];
		for(int i=0;i<n;i++)scanf("%d",&A[i]);
		for(int i=0;i<n;i++)scanf("%d",&B[i]);
		int j;
		printf("Test %d:\n",T);
		sapxep(A,n);
		sapxep(B,n);
		swap(B,n);
		for(int i=0;i<n;i++)
		{
			printf("%d ",A[i]);
			printf("%d ",B[i]);
		}
		printf("\n");
		T++;
	}
	return 0;
}
