#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int factorial(int n)
{
    if(n==0||n==1)return 1;
    return n*factorial(n-1);
}
int sum(int m)
{
    int s=0,p=m;
    if(m==2||m==1)return 1;
    if(m%5!=0||m>50000)return 0;
    while(m>0)
    {
        s=s+factorial(m%10);
        m=m/10;
    }
    if(s==p)return 1;
    else return 0;
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    if(m>n){int temp=m;m=n;n=temp;}
    while(m<=n)
    {
        if(sum(m)==1)printf("%d ",m);
        m++;
    }
}
