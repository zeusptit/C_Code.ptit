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
    int l = strlen(x);
    for(int i=0;i<l-1;i++)if(x[i] > x[i + 1])return 0;
    return 1;
}
int find(word a[],int n,char temp[])
{
    for(int i=0;i<n;i++)
    {
        if(strcmp(a[i].tu,temp) == 0)
          return i;
    }
    return -1;
}
void sapxep(word a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int max=i;
        for(int j=i+1;j<n;j++)if(a[max].dem < a[j].dem)max = j;
        if(max != i)
        {
            word temp = a[max];
            a[max] = a[i];
            a[i] = temp;
        }
    }
}
int main(int argc, char *argv[]) {
    word a[1001];
    char s[100];
    int n = 0;
    while((scanf("%s",s)) != -1)
    {
        if(check(s))
        {
            int idx = find(a,n,s);
            if(idx == -1)
            {
                strcpy(a[n].tu,s);
                a[n].dem = 1;
                ++n;
            }else{
                a[idx].dem++;
            }
        }
    }
    sapxep(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%s %d\n",a[i].tu,a[i].dem);
    }
}
/*123 321 23456 123 123 23456 3523 123 321
8988 7654 9899 3456 123 999 3456
987654321 4546 63543 4656 13432 4563
123471 659837 454945 34355 9087 9977
98534 3456 23134*/
