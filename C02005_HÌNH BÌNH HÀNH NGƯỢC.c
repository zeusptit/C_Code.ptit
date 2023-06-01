#include <stdio.h>
#include <stdlib.h>

int main()
{
   int doc,ngang,t;
   scanf("%d""%d",&ngang,&doc);
   t=0;
   for(int i=1;i<=ngang;i++){
        if(t>0)for(int k=1;k<=t;k++)
            printf("~");
        if(t<ngang-1) t++;
        for(int j=1;j<=doc;j++){
            printf("*");
         }
        printf("\n");
    }
}
