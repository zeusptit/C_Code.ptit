#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   int n,T,sd,a,i;
   scanf("%d",&n);
   T=1;
   while(n>10){
      i=n%10;
      n=n/10;
      T=T*i;
   }
   while(n>0){
      a=n%10;
      n=n/10;
    }
    sd=a;
    printf("%d",T*sd);
}
