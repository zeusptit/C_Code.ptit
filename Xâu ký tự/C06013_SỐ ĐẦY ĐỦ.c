#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
    int test;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        char s[10000];
        gets(s);
        int len = strlen(s);
        int n = 48;
        int dem = 0;
        int kt = 0;
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<len;j++)
            {
                if(s[0] == '0')
                {
                  kt = 1;
                  break;
                }
                if(s[j] < 48 || s[j] > 57)
                {
                    kt = 1;
                    break;
                }
                if(s[j] == n)
                {
                    dem++;
                    n++;	
                }
            }
        }
        if(kt == 1)printf("INVALID\n");
        else
        {
          if(dem == 10)printf("YES\n");
          else printf("NO\n");
        }
    }
    return 0;
}
