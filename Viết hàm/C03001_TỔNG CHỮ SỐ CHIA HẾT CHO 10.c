#include <stdio.h>
#include <stdlib.h>
int tongcs(int n){
 int s=0;
 while(n>0)
 {
     s=s+n%10;
     n=n/10;
 }
 if(s%10==0)return 1;
 return 0;
}

int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        if(tongcs(n)==1)printf("YES\n");
        else printf("NO\n");
    }
}
