#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int N,M;
    scanf("%d%d",&N,&M);
    int A[10][10];
    int i,j;
    for(i=0;i<N;i++)for(j=0;j<M;j++)scanf("%d",&A[i][j]);
    int k;
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        { 
            printf("%d ",A[j][i]);
        }
        printf("\n");
    }
}
