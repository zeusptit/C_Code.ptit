#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sl,sch,i;
    scanf("%d",&n);
    sl=0;
    sch=0;
    while(n>0){
        i=n%10;
        n=n/10;
        if(i%2==0)sch++;
        if(i%2==1)sl++;
    }
    printf("%d %d",sl,sch);
}
