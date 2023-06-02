#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int max(int a,int b)
{
    if(a >= b)return a;
    return b;
}
int main()
{
    char str[101];
    gets(str);
    int length = strlen(str);
    int dp[101] = {0},res = 0;
    for(int i=0;i<length;i++)
    {
        dp[i] = 1;
        for(int j=0;j<i;j++)
        {
            if(str[i] > str[j])dp[i] = max(dp[i],dp[j] + 1);
        }
        res = max(res,dp[i]);
    }
    res = 26 - res;
    printf("%d",res);
    return 0;
}
