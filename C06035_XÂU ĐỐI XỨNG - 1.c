#include <stdio.h>
#include <math.h>
#include <string.h>
const float pi = 3.141592653589793;
int check(char x[])
{
    int len = strlen(x);
    int dem = 0;
    for(int i=0;i<len/2;i++)
    {
        if(x[i] != x[len - i - 1])dem++;
    }
    return dem;
}
int main()
{
    int test;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        char s[20];
        gets(s);
        int len = strlen(s);
        if(len%2 == 0)
        {
            if(check(s) == 1)printf("YES\n");else printf("NO\n");
        }else{
            if(check(s) == 0 || check(s) == 1)printf("YES\n");else printf("NO\n");
        }
    }
    return 0;
}
