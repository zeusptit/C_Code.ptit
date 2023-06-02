#include <stdio.h>
#include <stdlib.h>

int main()
{
    int S,a,b,n;
    scanf("%d""%d",&a,&b);
    if(a>=b){
        n=a-b+1;
    }else{
        n=b-a+1;
    }
    S=(a+b)*n/2;
    printf("%d",S);
}
