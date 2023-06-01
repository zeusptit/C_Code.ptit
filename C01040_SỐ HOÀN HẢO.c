#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,S;
    scanf("%d",&n);
    S=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
           S+=i;
        }
    }
    if(S==n){
        printf("1");
    }else{
        printf("0");
    }
}
