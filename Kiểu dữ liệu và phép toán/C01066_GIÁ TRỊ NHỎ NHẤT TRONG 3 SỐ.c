#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d""%d""%d",&a,&b,&c);
    if(a>=b){
        if(b>=c){
         printf("%d",c);
    }else{
        printf("%d",b);
    }
    }
    if(a<b){
        if(a>=c){
            printf("%d",c);
        }else{
            printf("%d",a);
        }
    }
}
