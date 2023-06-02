#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int test;
	scanf("%d",&test);
	while(test--)
	{
		long long n;
		scanf("%lld",&n);
		while(n % 2 == 0)n /= 2;
		for(int i=3;i<=sqrt(n);i+=2)
			while(n % i == 0 && n / i > 1)
		 		n /= i;
		printf("%lld\n",n);
	}
	return 0;
}
