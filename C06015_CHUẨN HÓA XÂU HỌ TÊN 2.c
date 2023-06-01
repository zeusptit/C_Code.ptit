#include <stdio.h>
#include <ctype.h>
#include <string.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void delspace(char x[])
{
    int i,j;
    for(i=j=0;x[i];i++)
        if(!isspace(x[i]) || i > 0 && !isspace(x[i - 1]))
            x[j++]=x[i];
    x[j] = '\0';
}
void chuanhoa(char s1[],char s2[])
{
    delspace(s1);
    int len = strlen(s1);
    for(int i=0;i<len;i++)
        if(s1[i] >= 65 && s1[i] <= 90)s1[i] += 32;
    int j = 0;
    for(int i=0;i<len;i++)
    {
        if(s1[i] == ' ')break;
        s2[j] = s1[i];
        j++;
    }
    for(int i=0;i<len;i++)s1[i]=s1[i+j+1];
    s1[0] -= 32;
    for(int i=0;i<len;i++)
        if(s1[i] == ' ' && s1[i + 1] != ' ')
            s1[i + 1] -= 32;
    printf("%s, ",s1);
    for(int i=0;i<j;i++)
    {
        s2[i] -= 32;
        printf("%c",s2[i]);
    }
}
int main(int argc, char *argv[]) {
    int test;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        char s[10000];
        char word[1000];
        gets(s);
        chuanhoa(s,word);
        printf("\n");
    }
    return 0;
}
