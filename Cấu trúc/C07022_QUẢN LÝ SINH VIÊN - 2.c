#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct quanli{
    int t;
    char name[100];
    float a,b,c;
};

typedef struct quanli ql;

ql nhap(int n)
{
    ql a;
    a.t = n;
    getchar();
    gets(a.name);
    scanf("%f%f%f",&a.a,&a.b,&a.c);
    return a;
}

void in(ql x)
{
    printf("%d %s %.1f %.1f %.1f\n",x.t,x.name,x.a,x.b,x.c);
}
int main() {
    ql a[100];
    int x,fix[100],k=0,l=0;
    int ma,n;
    while(1)
    {
        int x;
        scanf("%d",&x);
        if(x == 1)
        {
            scanf("%d",&n);
            for(int i=0;i<n;i++)
            {
                a[k] = nhap(k + 1);
                k++;
            }
        }else
        if(x == 2)
        {
            scanf("%d",&ma);
            fix[l] = ma;
            l++;
            a[ma - 1]=nhap(ma);
        }else 
        if(x == 3)
        {
            printf("%d\n",k);
            for(int i=0;i<l;i++)printf("%d ",fix[i]);
            printf("\n");
            for(int i=0;i<k;i++)
            {
                if(a[i].a <= a[i].b && a[i].b <= a[i].c)in(a[i]);
            }
            break;
        }
    }
    return 0;
}
/*
1
2
nguyen van hai
8.5 5.5 7.5
tran van tuan
8.5 6.5 9.0
2
2
tran van nam
5.5 6.0 7.0
3
*/
