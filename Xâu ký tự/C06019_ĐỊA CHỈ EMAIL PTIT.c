#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void delspace(char x[])
{
    int i,j;
    for(i=j=0;x[i];i++)
        if(!isspace(x[i]) || i > 0 && !isspace(x[i - 1]))
            x[j++] = x[i];
    x[j]='\0';
}
void check(char s[],char word[])
{
    delspace(s);
    int len=strlen(s);
    for(int i=0;i<len;i++)if(s[i] >= 65 && s[i] <= 90)s[i] += 32;
    int j = 1;
    word[0] = s[0];
    int t;
    for(int i=0;i<len;i++)
    {
        if(s[i] == ' ')
        {
            word[j] = s[i + 1];
            j++;
            t = i + 1;
        }
    }
    for(int i=t+1;i<len;i++)
    {
        word[j] = s[i];
        j++;
    }
    for(int i=0;i<j;i++)printf("%c",word[i]);
    printf("@ptit.edu.vn");
}
int main(){
    char s[100],x[100];
    gets(s);
    check(s,x);
    return 0;
}
