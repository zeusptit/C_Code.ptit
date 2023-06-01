
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int m,n,a,b;
    scanf("%d""%d",&m,&n);
    a=sqrt(m);
    b=sqrt(n);
    if(a*a<m) {
        a++;
    }
    printf("%d\n",b-a+1);
    while(a*a<=n){
        printf("%d\n",a*a);
        a++;
    }
}
