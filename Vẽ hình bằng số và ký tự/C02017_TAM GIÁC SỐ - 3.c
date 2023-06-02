#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    int i,k;
    for(i=1;i<=n;i++)
    {
        int j=1;
        int dem=0;
        for(k=1;k<=i;k++)
        {
			printf("%d",j);
			j += 2;
			dem++;
        }
        for(int l=1;l<=dem-1;l++)
        {
        	printf("%d",j-4);
        	j -= 2;
        }
        printf("\n");
    }
    return 0;
}
