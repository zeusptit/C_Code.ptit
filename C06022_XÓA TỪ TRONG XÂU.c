#include <stdio.h>
#include <ctype.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void vt(char x[])
{
    int l=strlen(x);
    for(int i=0;i<l;i++)
        if(x[i] >= 65 && x[i] <= 90)
            x[i] += 32;
}
int main(int argc, char *argv[]) {
    int test;
    scanf("%d",&test);
    getchar();
    int t=1;
    while(test--)
    {
        char s1[200];
        char s2[20];
        gets(s1);
        gets(s2);
        char s3[200];
        char word1[200][2000],word2[200][200];
        strcpy(s3,s1);
        vt(s3);
        vt(s2);
        printf("Test %d: ",t);
        int r=0,c=0;
        int i=0;
        while(s3[i] != '\0')
        {
            if(s3[i] == ' ')
            {
                word1[r][c] = '\0';
                r++;
                c = 0;
            }else{
                word1[r][c] = s3[i];
                c++;
            }
            i++;
        }
        word1[r][c] = '\0';
        int r1 = 0,c1 = 0;
        i = 0;
        while(s1[i] != '\0')
        {
            if(s1[i] == ' ')
            {
              word2[r1][c1] = '\0';
              r1++;
              c1 = 0;
            }else{
              word2[r1][c1] = s1[i];
              c1++;
            }
            i++;
        }
        word2[r1][c1] = '\0';
        int a[200],j=0;
        for(i=0;i<=r;i++)
        {
            if(strcmp(word1[i],s2) == 0)
            {
                a[j] = i;
                j++;
            }
        }
        for(i=0;i<=r1;i++)
        {
            int kt=1;
            for(int k=0;k<j;k++)
            {
                if(i == a[k])
                {
                    kt = 0;
                    break;
                }
            }
            if(kt == 1)printf("%s ",word2[i]);
        }
        t++;
        printf("\n");
    }
    return 0;
}
