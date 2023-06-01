#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int check(int m)
{
	int dem = 0,tong = 0;
	int k;
	int n = m;
	int dao = 0;
	while(m > 0)
	{
		k = m % 10;
		if(k == 6)dem++;
		tong += k;
		dao = dao * 10 + k;
		m /= 10;
	}
	if(dem >= 1 && tong % 10 == 8 && dao == n)return 0;
	return 1;
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a > b){int temp = a;a = b;b = temp;}
	int i;
	for( i=a;i<=b;i++)
	if(check(i) == 0)printf("%d ",i);
	return 0;
}
