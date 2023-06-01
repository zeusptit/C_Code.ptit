#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void nhap(int A[100][100],int a,int b)
{
    for(int i=0;i<a;i++)
        for(int j=0;j<b;j++)
            scanf("%d",&A[i][j]);
}
void xuat(int A[100][100],int a,int b)
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)printf("%d ",A[i][j]);
        printf("\n");
    }
}

int main(int argc, char *argv[]) {
    int test;
    scanf("%d",&test);
    int t = 1;
    while(test--)
    {
        int m,n;
        scanf("%d%d",&m,&n);
        int A[100][100];
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
               scanf("%d",&A[i][j]);
        int max = -99999,tong;
        printf("Test %d:\n",t);
        int r,c;
        for(int i=0;i<m;i++)
        {
            tong = 0;
            for(int j=0;j<n;j++)
            {
                tong += A[i][j];
            }
            if(tong > max)
            {
              max = tong;
              r = i;
            }
        }
        max = -99999;
        for(int j=0;j<n;j++)
        {
            tong = 0;
            for(int i=0;i<m;i++)
            {
                if(i == r)
                {
                    continue;
                }
                tong += A[i][j];
                if(tong > max)
                {
                    max = tong;
                    c = j;
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            if(i==r)
            {
                continue;
            }
            for(int j=0;j<n;j++)
            {
                if(j == c)
                {
                    continue;
                }
                printf("%d ",A[i][j]);
            }
            printf("\n");
        }
        t++;
    }
}
