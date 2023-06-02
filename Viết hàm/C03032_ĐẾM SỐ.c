#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int Pn(int n)
{
    if(n<2)return 0;
    for(int i=2;i<=sqrt(n);i++)if(n%i==0)return 0;
    return 1;
}
int kiemtra(int m)
{
    int k,dem=0;
    while(m>0)
    {
        k=m%10;
        m=m/10;
        if(Pn(k)==0)dem++;
    }if(dem==0)return 1;return 0;
}
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        int dems=0;
        while(a<b)
        {
            if(Pn(a)==1&&kiemtra(a)==1)dems++;
            a++;
        }
        printf("%d ",dems);
        printf("\n");
    }
}
