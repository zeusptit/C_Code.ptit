#include <stdio.h>
#include <stdlib.h>
int sum(int n)
{
    int t=0;
    while(n>0)
    {
        t=t+n%10;
        n=n/10;
    }
    return t;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(sum(a)>sum(b))printf("%d %d",b,a);
    if(sum(a)<=sum(b))printf("%d %d",a,b);
}
