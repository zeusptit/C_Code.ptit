#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long a,b;
    scanf("%lld""%lld",&a,&b);
    if (b == 0)
    {
	printf ("0");
    }
    else{
       printf("%lld\n",a+b);
       printf("%lld\n",a-b);
       printf("%lld\n",a*b);
       printf("%lld\n",a/b);
       printf("%lld\n",a%b);
       printf("%.2lf",(double)a/b);
    }
}
