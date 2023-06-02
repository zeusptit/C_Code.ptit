#include <stdio.h>
#include <stdlib.h>
int snt(int a){
   int b;
   if(a<2)return 0;
   if(a==2)return 1;
   for(b=2;b<=sqrt(a);b++)
       if(a%b==0)return 0;
   return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
        if(snt(i)==1)printf("%d\n",i);
}
