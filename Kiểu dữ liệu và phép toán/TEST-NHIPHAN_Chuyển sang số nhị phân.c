#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int dem(int n)
{
    int t = 0;
    while(n > 0)
    {
        n = n / 2;
        t++;
    }
    return t;
}
int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    int m = dem(n);
    int a[m];
    if(n == 0)printf("0");
    while(n > 0)
    {
        for(int i=0;i<m;i++)
        {
            a[i] = n % 2;
            n = n / 2;
        }
    }
    for(int i=m-1;i>=0;i--)printf("%d",a[i]);
    return 0;
}
