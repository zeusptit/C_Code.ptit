#include <stdio.h>
#include <stdlib.h>
int gcd(int m,int n)
{
    int temp;
    while(n!=0)
    {
        temp=m%n;
        m=n;
        n=temp;
    }
    return m;
}
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int a,b,c,d;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(gcd(a,b)==gcd(c,d))printf("YES");else printf("NO");
        printf("\n");
    }
}
