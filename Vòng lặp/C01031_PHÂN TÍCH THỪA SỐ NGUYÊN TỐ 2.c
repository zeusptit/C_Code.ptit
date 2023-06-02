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
int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    int t = 2;
    while(n > 1)
    {
        while(Pn(t) == 1 && n % t == 0)
        {
            n = n / t;
            if(n > 1)printf("%dx",t);else printf("%d",t);
        }
        t++;
    }
}
