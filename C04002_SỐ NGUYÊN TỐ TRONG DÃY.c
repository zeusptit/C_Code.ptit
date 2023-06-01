#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int Pn(int n)
{
    if(n<2)return 0;
    if(n==2)return 1;
    for(int i=2;i<=sqrt(n);i++)if(n%i==0)return 0;
    return 1;
}
int main()
{
   int test;
   scanf("%d",&test);
   while(test--)
   {
       int n;
       scanf("%d",&n);
       int A[1000];
       for(int i=0;i<n;i++)scanf("%d",&A[i]);
       for(int i=0;i<n;i++)
       {
           if(Pn(A[i])==1)printf("%d ",A[i]);
       }
       printf("\n");
   }
}
