#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    int A[100],i;
    for(i=0;i<n;i++)scanf("%d",&A[i]);
    int t;
    scanf("%d",&t);
    for(i=n-t;i<n;i++)printf("%d ",A[i]);
    for(i=0;i<n-t;i++)printf("%d ",A[i]);
}
