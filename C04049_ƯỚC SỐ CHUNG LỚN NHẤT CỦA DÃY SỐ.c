#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int lcm(int a,int b)
{
    int temp;
    int x =a,y = b;
    while(b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return x * y / a;
}
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        int A[1001];
        for(int i=0;i<n;i++)scanf("%d",&A[i]);
        int B[1002];
        int i,j;
        B[0] = A[0];
        B[n] = A[n - 1];
        for(i=1;i<n;i++)
        {
          B[i] = lcm(A[i],A[i - 1]);
        }
        for(i=0;i<n+1;i++)printf("%d ",B[i]);
        printf("\n");
    }
}
