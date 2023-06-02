#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,a,b,test;
    scanf("%d",&test);
    while(test--){
      scanf("%d",&n);
      a=sqrt(n);
      b=trunc(a);
      if(n==pow(b,2)){
          printf("YES\n");
        }else{
          printf("NO\n");
      }
    }
}
