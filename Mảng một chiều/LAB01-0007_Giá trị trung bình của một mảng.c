#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	int a[100];
	int i;
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	double sum = 0;
	for(i=0;i<n;i++)sum += a[i];
	printf("%.3f",sum/n);
	return 0;
}
