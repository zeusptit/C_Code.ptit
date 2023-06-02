#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int tu(int a)
{
    int t=0;
    for(int i=2;i<sqrt(a);i++)
    {
        if(a%i==0)t=t+a/i+i;
    }
    if(t+1==a)return 1;
    return 0;
}
int main ()
{
    int n;
    scanf("%d",&n);
    int t=2;
    while(t<=n)
    {
    	if(tu(t)==1)printf("%d ",t);
	t++;
    }
}
