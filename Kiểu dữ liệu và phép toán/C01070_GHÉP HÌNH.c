#include<stdio.h>
 #include<math.h>
long long ktcp(long long a)
{
	long long b=sqrt(a);
	if(b*b==a) return b;
	b++;
	if(b*b==a) return b;
	return 0;
}
int main()
{
	long long a,b,c,d,e,f,x,y;
     	scanf("%lld%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e,&f);
	x=a*b+c*d+f*e;
	y=ktcp(x);
	if(y==0) printf("NO");
	else
	{
		if(a>b)
		{
			long long m=a;a=b;b=m;
		}
		if(c>d)
		{
			long long m=c;c=d;d=m;
		}
		if(e>f)
		{
			long long m=e;e=f;f=m;
		}
		if(b==d && d==f && f==y) printf("YES");
		else
		{
			if(d==y) {long long m=a;a=c;c=m;long long n=b;b=d;d=n; }
			if(f==y) {long long m=a;a=e;e=m;long long n=b;b=f;f=n; }
			if(b==y)
			{
				a=y-a;
				if((c==a && e==a) || (d==a && e==a)|| (c==a && f==a) || (d==a && f==a))  printf("YES");
				else  printf("NO");
			}
			else  printf("NO");
		}
	}
}
