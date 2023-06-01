#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int A[100];
        int i,n;
        scanf("%d",&n);
        for(i=0;i<n;i++)scanf("%d",&A[i]);
        int B[100] = {0};
        for(i=0;i<n;i++)B[A[i]]++;
        int max = A[0];
        for(i=1;i<n;i++)if(max <= B[A[i]])max = B[A[i]];
        for(i=0;i<n;i++)
        if(B[A[i]] == max)
        {
            printf("%d ",A[i]);
            B[A[i]] = 0;
        }
        printf("\n");
    }
    return 0;
}
