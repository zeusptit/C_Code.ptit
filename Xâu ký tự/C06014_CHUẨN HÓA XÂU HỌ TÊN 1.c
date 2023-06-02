#include <stdio.h>
#include <ctype.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void chuanhoa(char s[])
{
    int i,j;
    for(i=j=0;s[i];++i)
    {
        if(!isspace(s[i]) || i > 0 && !isspace(s[i - 1]))
           s[j++] = s[i];
    }
    s[j] = '\0';
    int n = strlen(s);
    for(i=0;i<n;++i) if(s[i] >= 65 && s[i] <= 90)s[i] += 32;
    if(s[0] >= 97 && s[0] <= 122)s[0] -= 32;
    for(i=0;i<n;++i)if(s[i] == ' ' && s[i + 1] != ' ') if(s[i + 1] >= 97 && s[i + 1] <= 122)s[i + 1] -= 32;
    printf("%s",s);
}
int main(int argc, char *argv[]) {
    int test;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        char s[10000];
        gets(s);
        chuanhoa(s);
        printf("\n");
    }
    return 0;
}
  
