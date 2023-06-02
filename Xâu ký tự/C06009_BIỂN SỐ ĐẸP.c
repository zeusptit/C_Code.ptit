#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int check1(char x[])
{
    for(int i=6;i<8;i++)if(x[i] >= x[i+1])return 0;
    if(x[8] >= x[10])return 0;
    if(x[10] >= x[11])return 0;
    return 1;
}
int check2(char x[])
{
    for(int i=6;i<8;i++)if(x[i] != x[i+1])return 0;
    if(x[8] != x[10])return 0;
    if(x[10] != x[11])return 0;
    return 1;
}
int check3(char x[])
{
    for(int i=6;i<8;i++)if(x[i] != x[i+1])return 0;
    if(x[10] != x[11])return 0;
    return 1;
}
int check4(char x[])
{
    int dem = 0;
    for(int i=6;i<9;i++)if(x[i] == '6' || x[i] == '8')dem++;
    for(int i=10;i<12;i++)if(x[i] == '6' || x[i] == '8')dem++;
    if(dem!=5)return 0;
    return 1;
}
int main(int argc, char *argv[]) {
    int test;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        char s[10000];
        gets(s);
        if(check1(s) == 1 || check2(s) == 1 || check3(s) == 1 || check4(s) == 1)printf("YES\n");else printf("NO\n");
    }
    return 0;
}
