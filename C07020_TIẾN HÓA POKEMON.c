#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct pokemon{
    char ten[100];
    int k,m;
    int count;
};

typedef struct pokemon pkm;

int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    pkm a[n];
    int tong = 0;
    for(int i=0;i<n;i++)
    {
        a[i].count=0;
        scanf("%s",&a[i].ten);
        scanf("%d%d",&a[i].k,&a[i].m);
        while(a[i].k<=a[i].m)
        {
            a[i].m -= a[i].k;
            a[i].m += 2;
            a[i].count++;
        }
        tong += a[i].count;
    }
    printf("%d\n",tong);
    int max = 0;
    for(int i=0;i<n;i++)
    {
        if(max < a[i].count)max = a[i].count;
    }
    for(int i=0;i<n;i++)
        if(a[i].count == max)
        {
            printf("%s\n",a[i].ten);
            break;
        }
    return 0;
}
/*
5
Pidgey
12 36
Ivysaur
10 63
Charmander
35 96
Pikachu
12 32
Squirtle
15 10
/
