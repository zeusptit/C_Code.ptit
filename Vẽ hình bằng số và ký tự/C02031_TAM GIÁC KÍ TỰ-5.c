#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	int n;
	scanf("%d",&n);
	int i;int d=n;
	while (n>0)
	{
		if (n!=1)
		{
			char temp='A'+n-2;
		for (i=n;i>0;i--)
		{
			printf("%c",temp);
			temp++;
		}
		printf("\n");
		n--;
	}
	else {printf("@");break;}
	}
}




