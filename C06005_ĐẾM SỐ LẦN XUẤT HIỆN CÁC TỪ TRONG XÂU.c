#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int check(char x1[],char x2[])
{
    int l1 = strlen(x1);
    int l2 = strlen(x2);
    if(l1 != l2)return 0;
    for(int i=0;i<l1;i++)if(x1[i] != x2[i])return 0;
    return 1;
}
int main(int argc, char *argv[]) {
    char str[10000],words[1000][100];
    int i,j;
    int r = 0,c = 0;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i] ==  ' ')
        {
            words[r][c] = '\0';
            r++;
            c = 0;
        }else{
            words[r][c] = str[i];
            if(words[r][c] >= 65 && words[r][c] <= 90)words[r][c] += 32;
            c++;
        }
    }
    words[r][c] = '\0';
    for(i=0;i<=r;i++)
    {
        if(words[i][0] == '\0')continue;
        else
        {
            int dem = 1;
            for(j=i+1;j<=r;j++)
                if(words[i][0] == words[j][0])
                    if(check(words[i],words[j]))
                    {
                      dem++;
                      words[j][0] = '\0';
                    }
            printf("%s %d\n",words[i],dem);
        }
    }
    return 0;
}
