#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Pn(int n)
{
   if(n < 2)return 0;
   for(int i=2;i<=sqrt(n);i++)if(n % i == 0)return 0;
   return 1;
}

int main(int argc, char *argv[]) {
   int test;
   scanf("%d",&test);
   int t = 1;
   while(test--)
   {
      int n;
      scanf("%d",&n);
      int A[10000],i;
      for(i=0;i<n;i++)scanf("%d",&A[i]);
      int B[10000]={0};
      printf("Test %d:\n",t);
      for ( i = 0; i < n; i++) {
          for (int j = i + 1 ; j < n; j++) {
              if (A[i] > A[j]) {
                  int temp = A[i];
                  A[i] = A[j];
                  A[j] = temp;
              }
          }
      }
      int min = A[0];
      for(i=1;i<n;i++)if(A[i] <= min)min = A[i];
      for(i=0;i<n;i++)B[A[i]]++;
      for(i=0;i<n;i++)
      {
          if(B[A[i]] >= 1 && Pn(A[i]) == 1)  
          {
              printf("%d xuat hien %d lan\n",A[i],B[A[i]]);
              B[A[i]] = 0;
          }
      }
      t++;
   }
   return 0;
}
