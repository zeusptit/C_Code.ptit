#include <stdio.h>
#include <stdlib.h>

void FastFibo(unsigned long long int fibo[])
{
        fibo[0] = 0;
	fibo[1] = 1;
	fibo[2] = 1;
	int i,temp;
	for (i=3; i<94; i++)
	{
		if (i % 2 == 0)
		{
			temp = i / 2;
			fibo[i] = fibo[temp] * (2 * fibo[temp + 1] - fibo[temp]);
		}
		else
		{
			temp = (i - 1) / 2;
			fibo[i] = fibo[temp] * fibo[temp] + fibo[temp + 1] * fibo[temp + 1];
		}
	}
}
int kt(unsigned long long int fibo[], unsigned long long int n)
{
	int i;
	for (i=0; i<94; i++)
	{
		if (fibo[i] == n ) return 1;
		if (fibo[i] > n) return 0;
	}
}
int main(int argc, char *argv[]) {
	int t,i;
	unsigned long long int n;
	scanf("%d", &t);
	unsigned long long int fibo[94];
	FastFibo(fibo);
	while (t--)
	{
		scanf("%llu", &n);
		if (kt(fibo, n)) printf("YES\n");
			else printf("NO\n");
	}
	return 0;
}
