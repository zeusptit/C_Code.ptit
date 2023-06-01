#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int Pn(int n)
{
    if(n < 2)return 0;
    for(int i=2;i<=sqrt(n);i++)if(n % i == 0)return 0;
    return 1;
}

int main(int argc, char *argv[]) {
    int test;
    scanf("%d",&test);
    getchar();
    while(test--)
    {		
        char s[500];
        gets(s);
        int l = strlen(s);
        int j = 0,k = 0;
        for(int i=0;i<l;i++)
        {
            if(Pn(s[i] - '0') == 0)j++;
            if(s[i] != s[l - i - 1])k++;
        }
        if(j == 0 && k == 0)printf("YES\n");else printf("NO\n");
    }
    return 0;
}
