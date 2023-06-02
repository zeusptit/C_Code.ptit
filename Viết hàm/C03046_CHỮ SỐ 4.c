#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int snd(long long int b)
{   
    int dao=0;
    int c=b;
    while(b>0)
    {
        dao=dao*10+b%10;
        b=b/10;
    }
    if(c==dao)return 1;else return 0;
}
int check(int a)
{
    int k;
    while(a>0)
    {
        k=a%10;
        a=a/10;
        if(k==4)return 0;
    }
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
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        for(int i=pow(10,n-1);i<=pow(10,n)-1;i++)
        {
            if(snd(i)==1&&check(i)==1&&sum(i)%10==0)printf("%d ",i);
        }
        printf("\n");
    }
}
