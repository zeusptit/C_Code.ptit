#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct word{
    char tu[1001];
    int dem;
};

typedef struct word word;
int find(word a[],int n,char temp[])
{
    for(int i=0;i<n;i++)
      if(strcmp(a[i].tu,temp) == 0)
         return i;
    return -1;
}
int main(int argc, char *argv[]) {
    int n=0;
    word a[1001];
    char s[1001];
    while(scanf("%s",&s)!=-1)
    {
        int idx=find(a,n,s);
        if(idx == -1)
        {
            strcpy(a[n].tu,s);
            a[n].dem++;
            n++;
        }else{
            a[idx].dem++;
        }
    }
    int max = 0;
    for(int i=0;i<n;i++)
    {
        if(strlen(a[i].tu) > max)max = strlen(a[i].tu);
    }
    for(int i=0;i<n;i++)
    {
        if(strlen(a[i].tu) == max)printf("%s %d  %d\n",a[i].tu,max,a[i].dem);
    }
    return 0;
}
/* 
Tiet hoc cuoi cung da ket thuc. Mon hoc
Tin hoc co so 2 da ket thuc. Cac ban co 
gang on tap tot de thi dat ket qua cao.
Chuc cac ban ngay cang gat hai duoc nhieu 
thanh cong tren con duong da chon
*/
