#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,m,test,p;
    scanf("%d",&test);
    while(test--){
        scanf("%d",&n);
        if(n==1){
            printf("NO\n");
        }
        if(n>1){
          m=2;
          for(int i=2;i<=sqrt(n);i++)
            if(n%i==0)
                m+=1;
        }
        if(trunc(sqrt(n))==sqrt(n)) m=m-1;
        if(m==2){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}
