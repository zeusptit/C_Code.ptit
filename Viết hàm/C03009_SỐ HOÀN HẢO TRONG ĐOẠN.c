#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int sohoanhao(int a)
{
    int t=1;
    for(int i=2;i<sqrt(a);i++)
    	if(a%i==0)
		t=t+i+a/i;
    if(t==a)return 1;
    if(a==1)return 0;
    return 0;
}
int main ()
{
    int m,n;
    scanf("%d%d",&m,&n);
    if(m>n){int temp=m;m=n;n=temp;}
    int t=m;
    while(t<n)
    {
        if(sohoanhao(t)==1)printf("%d ",t);
        t++;
    }
}
