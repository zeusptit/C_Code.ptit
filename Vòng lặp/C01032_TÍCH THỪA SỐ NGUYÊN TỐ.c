#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Pn(int n)
{
	if(n < 2)return 0;
	for(int i=2;i<=sqrt(n);i++)if(n % i == 0)return 0;
	return 1;
}
int main(int argc, char *argv[]) {
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int T=1;
		long long n;
		scanf("%lld",&n);
		int t = 2;
		while(n > 1)
		{
		    while(n % t == 0)
		    {
			n = n / t;
			if(n % t != 0)T = T * t;
		    }
		    t++;
		}
		printf("%d\n",T);
	}
}
