#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void nhap(int A[50][50],int a,int b)
{
    for(int i=0;i<a;i++)
        for(int j=0;j<b;j++)
            scanf("%d",&A[i][j]);
}
void xuat(int A[50][50],int a,int b)
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)printf("%d ",A[i][j]);
        printf("\n");
    }
}
int main(int argc, char *argv[]) {
    int A[50][50];
    int m,n;
    scanf("%d%d",&m,&n);
    nhap(A,m,n);
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
	    if(j  == a - 1)swap(&A[i][a - 1],&A[i][b - 1]);
    xuat(A,m,n);
    return 0;
}
