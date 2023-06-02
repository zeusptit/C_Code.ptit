#include <stdio.h>
#include <stdlib.h>
int kt(long long n)
{
    int k,dem=0;
    while(n>0)
    {
      k=n%10;
      n=n/10;
      if(k%2!=0)dem++;
    }
    if(dem>0)return 0;
    return 1;
}
int main()
{
   int test;
   scanf("%d",&test);
   while(test--)
   {
       long long m;
       scanf("%lld",&m);
       if(kt(m)==1)printf("YES");else printf("NO");
       printf("\n");
   }
}
