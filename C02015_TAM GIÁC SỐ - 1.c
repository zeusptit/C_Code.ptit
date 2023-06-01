#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    int i;
    int j = 1;
    for(i=1;i<=n;i++)
    {
        for(int k=1;k<=j;k++)printf("%d",k);
        printf("\n");
        j += 2;
    }
    return 0;
}
