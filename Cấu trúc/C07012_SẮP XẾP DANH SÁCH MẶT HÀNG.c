#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */    
struct mathang{
    int t;
    char sp[100];
    char ma[100];
    float mua,ban;
};

typedef struct mathang mh;
void sx(mh a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int max = i;
        for(int j=i+1;j<n;j++)
        {
            if((a[j].ban - a[j].mua) > (a[max].ban - a[max].mua))max = j;
        }
        mh tmp = a[max];
        a[max] = a[i];
        a[i] = tmp;
    }
}
int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    mh a[n];
    for(int i=0;i<n;i++)
    {
        getchar();
        a[i].t = i + 1;
        gets(a[i].sp);
        gets(a[i].ma);
        scanf("%f%f",&a[i].mua,&a[i].ban);
    }
    sx(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d %s %s %.2f\n",a[i].t,a[i].sp,a[i].ma,a[i].ban - a[i].mua);
    }
    return 0;
}
