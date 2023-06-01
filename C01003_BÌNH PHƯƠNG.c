#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,test;
   scanf("%d",&test);
   while(test--){
      scanf("%d",&n);
      printf("%lld\n",(long long)n*n);
   }
   return 0;
}
