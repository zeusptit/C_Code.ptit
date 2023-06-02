#include <stdio.h>
#include <string.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void check(char x[])
{
    int len=strlen(x);
    int dc = 0,dl = 0;
    int kt = 0;
    if(x[0] == 48)
    {
        printf("INVALID\n");
        kt = 1;
    }else{
    for(int i=0;i<len;i++)
    {
        int k = x[i] - 48;
        if(k < 0 || k > 9)
        {
          printf("INVALID\n");
          kt = 1;
          break;
        }
        if(k % 2 == 0)dc++;else dl++;
    }
    if(kt == 0)
    {
        if(dl != dc)
        {
            if(len % 2 == 0)
            {
              if(dc % 2 == 0 && dc > dl)printf("YES\n");else printf("NO\n");
            }else{
              if(dl % 2 == 1 && dl > dc)printf("YES\n");else printf("NO\n");
            }
            }
            else printf("NO\n");
        }
    }
}
int main(){
    int test;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        char s[10000];
        gets(s);
        check(s);
    }
    return 0;
}
