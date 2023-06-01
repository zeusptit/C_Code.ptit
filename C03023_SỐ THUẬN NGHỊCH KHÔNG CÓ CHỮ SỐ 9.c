#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int check(int n)
{
    int dao = 0,k,t = 0,m = n;
    while(n > 0)
    {
        k = n % 10;
        dao = dao * 10 + k;
        n /= 10;
        if(k == 9)t++;
    }
    if(t > 0)return 0;
    if(dao != m)return 0;
    return 1;
}
int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    int dem = 0,i;
    for(i=2;i<=n;i++)
        if(check(i) == 1)
        {
            printf("%d ",i);
            dem++;
        }
    printf("\n%d",dem);
    return 0;
}
