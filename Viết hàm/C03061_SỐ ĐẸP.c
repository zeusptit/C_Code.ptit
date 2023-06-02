#include <stdio.h>
#include <stdlib.h>
int snd(long long b)
{   int dao=0;
    int c=b;
    while(b>0)
    {
        dao=dao*10+b%10;
        b=b/10;
    }
    if(c==dao)return 1;else return 0;
}
int main()
{
   int test;
   scanf("%d",&test);
   while(test--)
   {
       long long n;
       scanf("%lld",&n);
       int sd,sc,dem=0;
       long long m=n;
       sc=m%10;
       while(n>0)
       {
           sd=n%10;
           n=n/10;
           dem++;
       }
       long long sg;
       sg=(m-sd*dem)/10;
       if(snd(sg==1))if(sd==sc*2||sc==sd*2)printf("YES");else printf("NO");
       printf("\n");
   }
}
