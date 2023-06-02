#include <stdio.h>
#include <stdlib.h>
int snd(long long int b)
{   int dao=0;
    int c=b;
    while(b>0)
    {
        dao=dao*10+b%10;
        b=b/10;
    }
    if(c==dao)return 1;else return 0;
}
int check1(long long int a)
{
    int k,dem=0;
    while(a>0)
    {
        k=a%10;
        a=a/10;
        if(k%2==0)dem++;
    }if(dem==0)return 1;
    else return 0;
}
int check2(long long int c)
{
    int sum=0;
    while(c>0)
    {
        sum=sum+c%10;
        c=c/10;
    }if(sum%2!=0)return 1;
    else return 0;
}
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        long long int n;
        scanf("%lld",&n);
        if(snd(n)==1&&check1(n)==1&&check2(n)==1)printf("YES");else printf("NO");
        printf("\n");
    }
}
