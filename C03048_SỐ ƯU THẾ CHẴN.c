#include <stdio.h>
#include <stdlib.h>
int check(long long a)
{
    int k,chan=0,le=0;
    while(a>0)
    {
        k=a%10;
        a=a/10;
        if(k%2==0)chan++;else le++;
    }
    if(chan<=le)return 0;
    return 1;
}
int main()
{
   int test;
   scanf("%d",&test);
   while(test--)
   {
       long long n;
       scanf("%lld",&n);
       if(n%2==0&&check(n)==1)printf("YES");else printf("NO");
       printf("\n");
   }
}
