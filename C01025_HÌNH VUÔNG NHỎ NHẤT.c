#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int max(int a,int b)
{
	if(a >= b)return a;
	return b;
}
int min(int c,int d)
{
	if(c >= d)return d;
	return c;
}
int main(int argc, char *argv[]) {
	int x1,y1,x2,y2,x3,y3,x4,y4;
	scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
	int maxX = max(x2,x4);
	int minX = min(x1,x3);
	int maxY = max(y2,y4);
	int minY = min(y1,y3);
	int ngang = maxX - minX;
	int doc = maxY - minY;
	if(ngang >= doc)printf("%d",ngang * ngang);else printf("%d",doc * doc);
	return 0;
}
