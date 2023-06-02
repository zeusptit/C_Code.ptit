#include <stdio.h>
#include <math.h>
#include <string.h>
const float pi = 3.141592653589793;
int Pn(int n)
{
    if(n < 2)return 0;
    for(int i=2;i<=sqrt(n);i++)if(n % i == 0)return 0;
    return 1;
}
int check(int n)
{
    if(Pn(n) == 0)return 0;
    int t = 0;
    while(n > 0)
    {
    	int k = n % 10;
	if(Pn(k) == 0)return 0;
	n /= 10;
	t += k;
    } 
    if(Pn(t) == 0)return 0;
    return 1;	
}
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
    	int a,b;
    	scanf("%d%d",&a,&b);
    	int dem = 0;
    	for(int i=a;i<=b;i++)
    	{
	    if(check(i) == 1)dem++;
	}
	printf("%d\n",dem);
    }
    return 0;
}

