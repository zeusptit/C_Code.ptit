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

float sum(ql x)
{
    return x.a + x.b + x.c;
}
void sort(ql a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(sum(a[i]) > sum(a[j]))
            {
                ql temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void in(ql x)
{
    printf("%d %s %.1f %.1f %.1f\n",x.t,x.name,x.a,x.b,x.c);
}
int main() {
    ql a[100];
    int fix[100],k = 0,l = 0;
    int m,n,p;
    while(1)
    {
        scanf("%d",&n);
        if(n == 1)
        {
            scanf("%d",&m);
            for(int i=0;i<m;i++)
            {
                a[l] = nhap(l + 1);
                l++;
            }
        }else 
        if(n == 2)
            {
                scanf("%d",&p);
                fix[k] = p;
                k++;
                a[p - 1] = nhap(p);
            }
        else 
        if(n == 3)
        {
            printf("%d\n",l);
            for(int i=0;i<k;i++)printf("%d ",fix[i]);
            printf("\n");
            sort(a,l);
            for(int i=0;i<l;i++)in(a[i]);
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
8.5.50 9.0
2
2
tran van nam
5.5 5.0 6.0
3
*/
