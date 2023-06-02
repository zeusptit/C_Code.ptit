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
    int n;
    scanf("%d",&n);
    int A[1000],i;
    for(i=0;i<n;i++)scanf("%d",&A[i]);
    int dem = 0;
    for(i=0;i<n;i++)if(Pn(A[i]) == 1)dem++;
    printf("%d ",dem);
    for(i=0;i<n;i++)if(Pn(A[i]) == 1)printf("%d ",A[i]);
    return 0;
}
