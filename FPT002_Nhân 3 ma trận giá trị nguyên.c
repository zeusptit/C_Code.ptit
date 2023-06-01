#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Nhap(int x[][100],int a,int b)
{
    for(int i=0;i<a;i++)
      for(int j=0;j<b;j++)
          scanf("%d",&x[i][j]);
}
void Xuat(int x[][100],int a,int b)
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
            printf("%d ",x[i][j]);
        printf("\n");
    }
}
void Nhan(int x[][100],int y[][100],int z[][100],int a,int b,int c)
{
    for(int i=0;i<a;i++)
      for(int j=0;j<c;j++)
        for(int k=0;k<b;k++) z[i][j] += x[i][k] * y[k][j];
}

int main(int argc, char *argv[]) {
    int x[100][100],y[100][100],z[100][100],t[100][100],w[100][100];
    int m,n,p,q;
    scanf("%d%d%d%d",&m,&n,&p,&q);
    Nhap(x,m,n);
    Nhap(y,n,p);
    Nhap(t,p,q);
    Nhan(x,y,z,m,n,p);
    Nhan(z,t,w,m,p,q);
    Xuat(w,m,q);
    return 0;
}
