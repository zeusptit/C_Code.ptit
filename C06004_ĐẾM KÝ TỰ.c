#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char s[101];
    fgets(s,sizeof(s),stdin);
    int length = strlen(s) - 1;
    int dc = 0,ds = 0,dkt = 0;
    for(int i=0;i<length;i++)
    {
        if(s[i] != '\0')
        {
            if(s[i] >= 65 && s[i] <= 90)dc++;
            else if(s[i] >= 97 && s[i] <= 122)dc++;
            else if(s[i] >= 48 && s[i] <= 57)ds++;
            else dkt++;
        }
    }
    printf("%d %d %d",dc,ds,dkt);
    return 0;
}
