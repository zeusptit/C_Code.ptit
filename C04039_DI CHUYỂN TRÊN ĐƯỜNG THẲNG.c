#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    long long x,y;
    while(scanf("%lld%lld",&x,&y) != -1)
    {
        long long dif = abs(x-y);
        int root = sqrt(dif);
        long long tg = root *(root - 1);
        int res = 0;
        if(dif - tg > 2 * root) res = 2 * root + 1;
        else if(dif - tg > root)res = 2 * root;
        else res = 2 * root - 1;
        printf("%d\n",res);	
    }
}
