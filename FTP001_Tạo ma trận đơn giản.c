#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Xuat(int a[100][100],int m,int n)
{
    for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
       printf("%d ",a[i][j]);
       printf("\n");
    }
}
int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    int i,j;
    int a[100][100];
    for (i=0;i<n;i++)
    {
        j=0;
        while (j <= i)
        {
            a[i][j] = 0;
            j++;
        }
        int temp = 1;
        while (j<n)
        {
            a[i][j] = temp;
            j++;
            temp++;
        }
    }
    Xuat(a,n,n);
    
    return 0;
}
