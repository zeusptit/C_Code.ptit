#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int Pn(int a)
{
	if(a < 2)return 0;
	for(int i=2;i<=sqrt(a);i++)if(a % i == 0)return 0;
	return 1;
}
int main(int argc, char *argv[]) {
	int m;
	scanf("%d",&m);
	int A[50][50];
	for(int i=0;i<m;i++)
	  	for(int j=0;j<m;j++)
			scanf("%d",&A[i][j]);
	int tong = 0;
	for(int i=0;i<m;i++)
	{
		for(int j=i;j<m;j++)
		{
			if(Pn(A[i][j]) == 1)tong += A[i][j];
		}
	}
	printf("%d",tong);
	return 0;
}
