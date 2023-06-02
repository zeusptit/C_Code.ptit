#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void in(int A[][100],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
}
void out(int A[][100],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}
void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void solve(int A[][100],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            for(int k=i;k<n;k++)
            {
                for(int l=j;l<m;l++)
                {
                    if(A[i][j] > A[k][l])swap(&A[i][j],&A[k][l]);
                }
            }
        }
    }
}

int main(int argc, char *argv[]) {
    int test;
    scanf("%d",&test);
    int t=1;
    while(test--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int A[100][100];
        in(A,n,m);
        printf("Test %d:\n",t);
        t++;
        solve(A,n,m);
        out(A,n,m);
    }
}
