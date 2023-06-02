#include <stdio.h>
#include <stdlib.h>

int main()
{
   int test;
   scanf("%d",&test);
   while(test--)
   {
       int n;
       scanf("%d",&n);
       int A[1000];
       int i,j;
       for( i=0;i<n;i++)scanf("%d",&A[i]);
       int max=A[0];
       for( i=1;i<n;i++)
       {
           if(A[i] >= max)max = A[i];
       }
       printf("%d\n",max);
       for(i=0;i<n;i++)
            if(A[i] == max)printf("%d ",i);
       printf("\n");
   }
}
