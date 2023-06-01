#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ngang,doc;
    scanf("%d""%d",&ngang,&doc);
    int i,j;
    for(j=1;j<=doc;j++){
        for(i=1;i<=ngang;i++){
            if(j==1||j==doc) printf("*");
            else if(i==1 || i==ngang) printf("*");else printf(" ");
        }
        printf("\n");
    }
}
