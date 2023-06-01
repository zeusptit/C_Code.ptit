#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    int A[100],i;
    for(i=0;i<n;i++)scanf("%d",&A[i]);
    int max = 3;
    for(i=0;i<n;i++)if(A[i] >= max)max = A[i];
    int nmax = 3;
    for(i=1;i<n;i++)if(A[i] >= nmax && A[i] != max)nmax = A[i];
    printf("%d %d",max,nmax);
}
