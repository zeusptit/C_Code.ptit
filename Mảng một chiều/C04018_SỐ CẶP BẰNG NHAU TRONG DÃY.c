#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int test;
    scanf("%d",&test);
    while(test--)
    {
         int n;
         scanf("%d",&n);
         int A[100],i;
         for(i=0;i<n;i++)scanf("%d",&A[i]);
         int dem = 0;
         for(i=0;i<n-1;i++)if(A[i] == A[i + 1])dem++;
         printf("%d\n",dem);
    }
     return 0;
}
