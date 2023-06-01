#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(int argc, char *argv[]) {
    int m;
    scanf("%d",&m);
    int A[10][10];
    for(int i=0;i<m;i++)
       for(int j=0;j<m;j++)
          scanf("%d",&A[i][j]);
    for(int i=0;i<m;i++)
        for(int j=0;j<m;j++)
            if(j  == i || i + j + 1 == m)swap(&A[i][j],&A[i][m - 1 - i]);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
            printf("%d ",A[i][j]);
        printf("\n");
    }
}
