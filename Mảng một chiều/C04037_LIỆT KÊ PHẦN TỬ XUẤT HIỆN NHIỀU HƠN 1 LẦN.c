#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    int A[100];
    int i;
    for(i=0;i<n;i++)scanf("%d",&A[i]);
    int B[100] = {0},C[100] = {0};
    int dem = 0;
    for(i=0;i<n;i++)
    {
        B[A[i]]++;
        C[A[i]]++;
    }
    for(i=0;i<n;i++)
    if(B[A[i]] > 1)
    {
        dem++;
        B[A[i]] = 0;
    }
    printf("%d\n",dem);
    for(i=0;i<n;i++)
    if(C[A[i]] > 1)
    {
        printf("%d ",A[i]);
        C[A[i]] = 0;
    }
}
