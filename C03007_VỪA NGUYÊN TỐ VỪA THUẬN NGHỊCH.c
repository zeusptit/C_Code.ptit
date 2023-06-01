#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int snt(int a)
{
    if(a<2)return 0;
    for(int i=2;i<=sqrt(a);i++)if(a%i==0)return 0;
    return 1;
}
int snd(int b)
{   int dao=0;
    int c=b;
    while(b>0)
    {
        dao=dao*10+b%10;
        b=b/10;
    }
    if(c==dao)return 1;else return 0;
}
int main()
{
    int test;
    scanf("%d",&test);
    int j;
    while(test--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        int dem=0;
        for(j=a;j<=b;j++)
        {
            if(snt(j)==1&&snd(j)==1)
             {
                dem++;
                printf("%d ",j);
             }
                if(dem==10)
                {
                    printf("\n");
                    dem=0;
                }
        }
        printf("\n");
    }
}
