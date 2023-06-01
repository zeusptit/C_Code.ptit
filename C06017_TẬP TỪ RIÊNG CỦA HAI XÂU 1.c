#include <stdio.h>
#include <ctype.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void vietthuong(char x[])
{
    int len = strlen(x);
    for(int i=0;i<len;i++)
        if(x[i] >= 65 && x[i] <= 90)x[i] += 32;
}
int check(char x1[],char x2[])
{
    int l1 = strlen(x1);
    int l2 = strlen(x2);
    if(l1 != l2)return 0;
    for(int i=0;i<l1;i++)
      if(x1[i] != x2[i])return 0;
    return 1;
}
int main(int argc, char *argv[]) {
    char s1[100],s2[100];
    gets(s1);
    gets(s2);
    int r1,c1,r2,c2;
    char word1[100][100],word2[100][100];
    char temp[100];
    vietthuong(s1);vietthuong(s2);
    r1=0,c1=0;
    int i=0;
    while(s1[i]!='\0')
    {
        if(s1[i]== ' ')
        {
            word1[r1][c1]='\0';
            r1++;
            c1=0;
        }else{
            word1[r1][c1]=s1[i];
            c1++;
        }
      i++;
    }
    word1[r1][c1]='\0';
    r2=0,c2=0;
    int j=0;
    while(s2[j]!='\0')
    {
        if(s2[j]== ' ')
        {
            word2[r2][c2]='\0';
            r2++;
            c2=0;
        }else{
            word2[r2][c2]=s2[j];
            c2++;
        }
      j++;
    }
    word2[r2][c2]='\0';
    for (i = 0; i < r1; i++) {
        for (int l = 1; l < r1 + 1; l++) {
            if (word1[l][0] == '\0' || l == i)
                continue;
            if (strcmp(word1[i], word1[l]) == 0) {
                word1[l][0] = '\0';
            }
        }
    }
    for(int k=0;k<=r1;k++)
    {
        for(int l=0;l<=r1;l++)
        {
            if(word1[k][0]<word1[l][0])
            {
                strcpy(temp,word1[k]);
                strcpy(word1[k],word1[l]);
                strcpy(word1[l],temp);
            }
        }
    }
    for(int k=0;k<=r1;k++)
    {
        if(word1[k][0]=='\0')continue;
        else for(int l=0;l<=r1;l++)
        {
        if(check(word1[k],word2[l]))
            if(word1[k][0]==word2[l][0])
            {
                word1[k][0]='\0';
            }
        }
        if(word1[k][0]!='\0')printf("%s ",word1[k]);
    }
    return 0;
}
