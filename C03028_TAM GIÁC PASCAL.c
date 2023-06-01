#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int pascal(int k,int n)
{
    if(k == 1 || k == n)return 1;
    return pascal(k,n - 1) + pascal(k - 1,n - 1);
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int n=1;n<=t;n++)
    {
        for(int k=1;k<=n;k++)
	    printf("%d ",pascal(k,n));
	printf("\n");
    }
}
