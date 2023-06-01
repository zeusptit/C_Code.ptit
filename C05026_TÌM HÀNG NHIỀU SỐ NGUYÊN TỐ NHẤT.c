#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int Pn(int n)
{
    if(n<2)return 0;
    for(int i=2;i<=sqrt(n);i++)if(n % i == 0)return 0;
    return 1;
}
int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    int A[50][50];
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    int max = -99999;
    int t,dem = 0;
    for(i=0;i<n;i++)
    {
        dem = 0;
        for(j=0;j<n;j++)
        {
            if(Pn(A[i][j]) == 1)dem++;
        }
        if(dem > max)
        {
            max = dem;
            t = i + 1;
        }   
    }
    printf("%d\n",t);
    for(j=0;j<n;j++)
    {
        if(Pn(A[t - 1][j]) == 1)printf("%d ",A[t - 1][j]);
    }
}
