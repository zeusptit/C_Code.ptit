#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    int i,j,k;
    printf("1\n");
    int min = 1,max = 1;
    for (i=2;i<=n;i++)
    {
        min = max + 1;
        max = max + i;
        if (i % 2 == 0) for (j=max;j>=min;j--) printf("%d ",j);
        else for (j=min;j<=max;j++) printf("%d ",j);
        printf("\n");
    }
    return 0;
}
