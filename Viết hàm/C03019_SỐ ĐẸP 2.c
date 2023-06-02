#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int check(int n)
{
	int k = 0,tong = 0,A[100];
	while(n > 0)
	{
		A[k++] = n % 10;
		tong += n % 10;
		n /= 10;
	}
	if(tong % 10 != 0)return 0;
	for(int i=0;i<k/2;i++)if(A[i] != A[k - i - 1])return 0;
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
		int dem = 0;
		int a = pow(10,n - 1);
		int b = pow(10,n);
		for(int i=a;i<b;i++)
		{
			if(i % 10 != i/a || i % 10 == 0)continue;
			if(check(i) == 1)dem++;
		}
		printf("%d\n",dem);
	}
}
