#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ll long long

int main()
{
   int test;
   scanf("%d",&test);
   ll T=0;
   while(test--)
   {
        int n;
        scanf("%d",&n);
        int m = n;
        int i;
        while(m % 2 == 0)
        {
            T = T + 2;
            m = m / 2;
        } 
        for(i=3;i<=sqrt(m);i+=2)
        
            {
                while(m % i == 0)
                {
                     m = m / i;
                     T = T + i;
                }
           }
        if(m > 2)T = T + m;
    }
    printf("%lld",T);
    return 0;
}
