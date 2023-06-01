#include <stdio.h>
#include <stdlib.h>

long long int dao(long long int a)
{
	long long int aa=0;
	while (a>0)
	{
		aa=aa*10+a%10;
		a=a/10;
	}
	return aa;
}
int catso(int b)
{
	if (b==0) return 0;
	if (b==1) return 1;
	if (b==8) return 0;
	if (b==9) return 0;
	return -1;
}
long long int kt(long long int c)//1890
{
	int dem=0;
	while (c%10==0)
	{
		dem++;//1
		c=c/10;//189
	}
	c=dao(c);//981
	long long int cc=0;
	while (c>0)
	{
		if (catso(c%10)==-1) return -1;
		cc=cc*10+catso(c%10);//1
		c=c/10;//98 9 0
	}
	while (dem>0)
	{
		cc=cc*10;//0
		dem--;//0
	}
	return cc;
}

int main(int argc, char *argv[]) {
	int t;
	scanf("%d",&t);
	long long int n;
	while (t--)
	{
		scanf("%lld",&n);
		if (kt(n)<=0) printf("INVALID");else printf("%lld",kt(n));
		printf("\n");
	}
}

