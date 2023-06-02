#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned n,t;
    scanf("%u",&n);
    t=n;
    if(t>0){
    t--;
    for(int i=1;i<=t;i++){
        printf("~");
    }
    for(int j=1;j<=n;j++){
        printf("*");
    }
    printf("\n");
    }
}
