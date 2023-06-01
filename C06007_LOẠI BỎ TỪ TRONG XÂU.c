#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int n,i,j,temp,check = 0;
    char s[102],w[102];
    fgets(s,sizeof(s),stdin);
    fgets(w,sizeof(w),stdin);
    int ls = strlen(s);
    int lw = strlen(w)-1;
    for(i=0;i<ls;++i)
    {
        temp = i;
        for(j=0;j<lw;++j)if(s[i] == w[j])++i;
        check = i - temp;
        if(check == lw){
            i = temp;
            for(j=i;j<(ls-lw);++j)s[j] = s[j + lw];
            ls -= lw; s[j] = '\0';
        }
    }
    printf("%s",s);
    return 0;
}
