#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++)
    {
        int l = n - 2;
        int k = n + i - 1;
        printf("%d ",i);
        for(j=1;j<=i-1;j++)
        {   printf("%d ",k);
            k += l;
            l--;
        }
        printf("\n");
    }
    return 0;
}
