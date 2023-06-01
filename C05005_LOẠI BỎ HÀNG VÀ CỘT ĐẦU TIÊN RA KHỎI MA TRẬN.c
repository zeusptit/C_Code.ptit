#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int test;
    scanf("%d",&test);
    int t = 1;
    while(test--)
    {
        int N,M;
        scanf("%d%d",&N,&M);
        int i,j;
        int A[100][100];
        for(i=0;i<N;i++)for(j=0;j<M;j++)scanf("%d",&A[i][j]);
        printf("Test %d:\n",t);
        for(i=1;i<N;i++) 
        {
            for(j=1;j<M;j++)printf("%d ",A[i][j]);
            printf("\n");
        }
        t++;
        printf("\n");
    }
}
