#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int Pn(int a)
{
    int i=2;
    if(a<2)return 0;
    while(i<=sqrt(a))
    {
        if(a%i==0)return 0;
        i++;
    }
    return 1;
}
int F(int b)
{
    int k=0,i=1,j=1;
    while(k<=b)
    {
        k=i+j;
        i=j;
        j=k;
        if(k==b)return 1;
    }
    return 0;
}
int sum(int c)
{
    int t=0;
    while(c>0)
    {
        t=t+c%10;
        c=c/10;
    }
    if(F(t)==1)return 1;
    else return 0;
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    if(m>n){int temp=m;m=n;n=temp;}
    while(m<=n)
    {
        if(Pn(m)==1&&sum(m)==1)printf("%d ",m);
        m++;
    }
}
