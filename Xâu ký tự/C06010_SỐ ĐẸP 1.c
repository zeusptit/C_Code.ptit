#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
     int test;
     scanf("%d",&test);
     getchar();
     while(test--)
     {
	char s[500];
	gets(s);
	int l = strlen(s);
	int j = 0,k = 0;
	for(int i=0;i,i<l;i++)
	{
	     if(s[i] != s[l - i - 1])j++;
	     if(s[i] % 2 != 0)k++;
	}
	if(j == 0 && k == 0)printf("YES\n");else printf("NO\n");
     }
     return 0;
}
