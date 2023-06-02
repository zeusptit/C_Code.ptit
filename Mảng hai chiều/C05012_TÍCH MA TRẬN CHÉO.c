#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int test;
	scanf("%d",&test);
	int t=1;
	while(test--)
	{
		int n;
		scanf("%d",&n);
		int A[50][50];
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
	    		if(j <= i)A[i][j] = j + 1;else A[i][j] = 0;
		printf("Test %d:\n",t);
		int B[50][50];//B la ma tran chuyen vi cua A
		for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		  B[j][i] = A[i][j];
		int C[50][50];
		for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			C[i][j] = 0;
			for(int k=0;k<n;k++)C[i][j] += A[i][k] * B[k][j];
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++) printf("%d ",C[i][j]);
			printf("\n");
		}
		t++;
	}
	return 0;
}
