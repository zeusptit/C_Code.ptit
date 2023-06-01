#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct hocsinh{
    char ten[100];
    char ngaysinh[100];
    float a,b,c;
    int t;
};

typedef struct hocsinh hs;

void sx(hs a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((a[j].a + a[j].b + a[j].c) > (a[i].a + a[i].b + a[i].c))
            {
                hs temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        } 
    }
}
int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    hs a[n];
    for(int i=0;i<n;i++)
    {
        getchar();
        a[i].t=i+1;
        gets(a[i].ten);
        gets(a[i].ngaysinh);
        scanf("%f %f %f",&a[i].a,&a[i].b,&a[i].c);
    }
    sx( a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d %s %s %.1f\n",a[i].t,a[i].ten,a[i].ngaysinh,a[i].a + a[i].b + a[i].c);
    }
    return 0;
}
