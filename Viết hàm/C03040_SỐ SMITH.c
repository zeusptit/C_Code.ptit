#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int Pn(int m)
{
    if(m<2)return 0;
    for(int i=2;i<=sqrt(m);i++)if(m%i==0)return 0;
    return 1;
}
int sum(int n)
{
    int t=0;
    while(n>0)
    {
        t=t+n%10;
        n=n/10;
    }return t;
}
int main()
{
    int n;
    scanf("%d",&n);
    int p=n;
    int tong=0,j=2;
    while(p>1)
    {
       while(Pn(j)==1&&p%j==0)
       {
           p=p/j;
           tong=tong+sum(j);
       }j++;
    }
    if(sum(n)==tong)printf("YES");else printf("NO");
}
