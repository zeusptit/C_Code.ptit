#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    int A[100],i,t;
    for(i=0;i<n;i++)scanf("%d",&A[i]);
    scanf("%d",&t);
    for(i=t;i<n;i++)printf("%d ",A[i]);
    for(i=0;i<t;i++)printf("%d ",A[i]);
}
