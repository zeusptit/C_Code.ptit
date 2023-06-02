#include <stdio.h>
#include <string.h>

long long swap_m(char s[20])
{
    long long res = 0;
    for(int i=0;i<strlen(s);++i)
    {
        if(s[i] == '6')res = res * 10 + 5;
        else res = res * 10 + s[i] - 48;
    }
    return res;
}
long long swap_M(char s[20])
{
    long long res=0;
    for(int i=0;i<strlen(s);++i)
    {
        if(s[i] == '5')res = res * 10 + 6;
        else res = res * 10 + s[i] - 48;
    }
    return res;
}
int main() {
    int test;
    scanf("%d",&test);
    char s1[20],s2[20];
    while(test--)
    {
        scanf("%s %s",s1,s2);
        printf("%lld %lld\n",swap_m(s1) + swap_m(s2),swap_M(s1) + swap_M(s2));
    }
    return 0;
}
