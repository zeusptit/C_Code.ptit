#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct word{
    char tu[100];
    int dem;
};

typedef struct word word;

int check(char x[])
{
    int l=strlen(x);
    for(int i=0;i<l;i++)if(x[i]!=x[l-i-1])return 0;
    return 1;
}
int find(word a[],int n,char temp[])
{
    for(int i=0;i<n;i++)
    {
        if(strcmp(a[i].tu,temp)==0)
          return i;
    }
    return -1;
}
int main(int argc, char *argv[]) {
    word a[1001];
    char s[100];
    int n=0;
    while((scanf("%s",s))!=-1)
    {
        if(check(s))
        {
            int idx=find(a,n,s);
            if(idx==-1)
            {
                strcpy(a[n].tu,s);
                a[n].dem=1;
                ++n;
            }
            else {
                a[idx].dem++;
            }
        }
    }
    int maxlen=0;
    for(int i=0;i<n;i++)
    {
        if(maxlen < strlen(a[i].tu))maxlen = strlen(a[i].tu);
    }
    for(int i=0;i<n;i++)
    {
        if(strlen(a[i].tu) == maxlen)printf("%s %d\n",a[i].tu,a[i].dem);
    }
    return 0;
}
