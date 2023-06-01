#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int FastFibo(int fibo[])
{
    fibo[0] = 0;
    fibo[1] = 1;
    fibo[2] = 1;
    int i,temp;
    for (i=3; i<94; i++)
    {
        if (i % 2 == 0)
        {
            temp = i/2;
            fibo[i] = fibo[temp] * ( 2 * fibo[temp + 1] - fibo[temp]);
        }
        else
        {
            temp = (i - 1)/2;
            fibo[i] = fibo[temp] * fibo[temp] + fibo[temp + 1] * fibo[temp + 1];
        }
    }
}
int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    int i,j=0;
    int A[100][100];
    int d = 0,hang = n - 1,cot = n - 1;
    int fibo[94];
    FastFibo(fibo);
    while(d <= n / 2)
    {
        for(i=d;i<=cot;i++){A[d][i] = fibo[j];j++;}
        for(i=d+1;i<=hang;i++){A[i][cot] = fibo[j];j++;}
        for(i=cot-1;i>=d;i--){A[hang][i] = fibo[j];j++;}
        for(i=hang-1;i>d;i--){A[i][d] = fibo[j];j++;}
        d++;
        cot--;
        hang--;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)printf("%d ",A[i][j]);
        printf("\n");
    }
}
