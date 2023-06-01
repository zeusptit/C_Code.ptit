#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int test;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        char s[10000];
        gets(s);
        int length = strlen(s);
        int dem = 0;
        int c = 0,l = 0;
        for(int i=0;i<length+1;i++)
        {
            if(s[i] == ' ' || s[i] == '\0')
            {
                dem++;
                if((s[i - 1] - 48) % 2 == 0)c++;else l++;
            }
        }
        if(dem % 2 == 0)
        {
            if(c > l)printf("YES\n");else printf("NO\n");
        }
        if(dem % 2 == 1)
        {
            if(c < l)printf("YES\n");else printf("NO\n");
        }
    }
}
