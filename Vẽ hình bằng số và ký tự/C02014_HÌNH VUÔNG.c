#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void vuong(int n)
{
    int i,j;
    for(i=-n+1;i<=n-1;i++)
    {
        for(j=-n+1;j<=n-1;j++)
        {
            if(abs(i) >= abs(j))printf("%d",abs(i) + 1);
            else printf("%d",abs(j) + 1);
        }
        printf("\n");
    }
}
int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    vuong(n);
    return 0;
}
