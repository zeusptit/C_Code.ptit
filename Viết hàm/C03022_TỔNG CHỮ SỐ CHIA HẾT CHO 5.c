#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int check(int n)
{
    if(n < 2)return 0;
    for(int i=2;i<=sqrt(n);i++)if(n % i == 0)return 0;
    int m = n,tong = 0;
    while(m > 0)
    {
    	tong += m % 10;
        m /= 10;
    }
    if(tong % 5 != 0)return 0;
    return 1;
}
int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    int dem=0;
    for(int i=1;i<=n;i++)if(check(i) == 1)
    {
    	printf("%d ",i);
        dem++;
    }
    printf("\n%d",dem);
    return 0;
}
