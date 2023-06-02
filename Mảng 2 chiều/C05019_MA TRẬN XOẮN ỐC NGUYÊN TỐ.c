#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int Pn(int n)
{
    if(n < 2)return 0;
    for(int i=2;i<=sqrt(n);i++)if(n % i == 0)return 0;
    return 1;
}
void songuyento(int n,int B[10000])
{
    int dem=0,i=2,j=0;
    while(dem<=n*n)
    {
        if(Pn(i)==1)
        {
            B[j]=i;
            j++;
            dem++;
        }
        i++; 
    }
}
int main(int argc, char *argv[]) {
    int test;
    scanf("%d",&test);
    int t=1;
    while(test--)
    {
        int n;
        scanf("%d",&n);
        int i,j = 0,count = 2;
        int A[100][100];
        int d = 0,hang = n - 1,cot = n - 1;
        int B[10000];
        songuyento(n,B);
        while(d <= n/2)
        {
            for(i=d;i<=cot;i++){A[d][i]=B[j];j++;}
            for(i=d+1;i<=hang;i++){A[i][cot]=B[j];j++;}
            for(i=cot-1;i>=d;i--){A[hang][i]=B[j];j++;}
            for(i=hang-1;i>d;i--){A[i][d]=B[j];j++;}
            d++;
            hang--;
            cot--;
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
