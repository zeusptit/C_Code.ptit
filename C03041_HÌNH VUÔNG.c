#include <stdio.h>
#include <stdlib.h>

int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int a,b,c,d ;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	c=c-a;
	d=d-b;
	if (c==d||c==-d) printf("YES");else printf("NO");
	printf("\n");
    }
}
