#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    int A[100];
    int i,j;
    for(i=0;i<n;i++)scanf("%d",&A[i]);
    for (i=0;i<n;i++)
    {
        int kt=1;
        for (j=0;j<i;j++) 
            if (A[i] == A[j])
            {
                kt = 0;
                break;
            }
        if (kt == 1) printf("%d ",A[i]);				
    }
}
