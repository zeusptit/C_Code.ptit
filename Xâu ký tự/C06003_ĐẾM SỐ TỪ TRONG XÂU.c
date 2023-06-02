#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Count(char str[], int length)
{
    int i,word;
    word = 0;
    for (i = 0; i < length - 1; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            word++;
        }
    }
    if (str[0] != ' ')
    {
        word++;
    }
    return word;
}
int main(int argc, char *argv[]) {
    int i,t,l;
    scanf("%d",&t);
    for (i=1;i<=t;i++)
    {
        char str[202];
        scanf("\n");
        fgets(str, sizeof(str), stdin);
        int length = strlen(str) - 1; 
        str[length] = '\0';
        printf("%d\n",Count(str, length));
    }
    return 0;
}
