#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char s[100002];
	getchar();
	gets(s);
	long long l = strlen(s);
	printf("%lld",l);
	return 0;
}
