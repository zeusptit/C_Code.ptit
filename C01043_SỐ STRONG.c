#include <stdio.h>
#include <stdlib.h>
int giaithua(int a)
{
    if(a==1||a==0) return 1;
    return  a*giaithua(a-1);
}
int main()
{
   int n;
   scanf("%d",&n);long int tong=0;
   int m=n;
   while(n!=0){
        tong =tong+giaithua(n%10);
        n=n/10;
   }
   if(tong==m){
        printf("1");
   }else{
        printf("0");
   }
}





