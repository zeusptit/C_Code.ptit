#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int test;
    scanf("%d",&test);
    int t=1;
    while(test--)
    { 
        int A[100][100];
        int n;
        scanf("%d",&n);
        int d = 0,hang = n - 1,cot = n - 1;
        int i,j,count = n * n;
        while(d <= n / 2)
        {
            for(i=d;i<=cot;i++)A[d][i] = count--;
            for(i=d+1;i<=hang;i++)A[i][cot] = count--;
            for(i=cot-1;i>=d;i--)A[hang][i] = count--;
            for(i=hang-1;i>d;i--)A[i][d] = count--;
            d++;hang--;cot--;
        }
        printf("Test %d:\n",t);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)printf("%d ",A[i][j]);
            printf("\n");
        }
        t++; 
    }
}
