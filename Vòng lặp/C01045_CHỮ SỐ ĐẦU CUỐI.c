#include <stdio.h>
#include <stdlib.h>

int main()
{
     long long n,sd,sc,a;
     scanf("%lld",&n);
     sc=n%10;
     while(n>0)
     {
	  a=n%10;
	  n=n/10;
     }
     sd=a;
     printf("%d %d",sd,sc);
}
