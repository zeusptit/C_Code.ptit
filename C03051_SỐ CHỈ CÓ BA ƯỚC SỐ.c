#include <stdio.h>
#include <math.h>
int scp(long long t)
{
    for(long long i=2;i<=sqrt(t);i++)
    {
        if(i*i == t)
        {
           return 1;
        }
    }
    return 0;
}

int Pn(long long q)
{
    if(q < 2)return 0;
    for(int i=2;i<=sqrt(q);i++)if(q % i == 0)return 0;
    return 1;
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--)
    {
        long long L,R;
        scanf("%lld%lld",&L,&R);
        int dem = 0;
        for(long long i=sqrt(L);i<=sqrt(R);i++)
        {
           if(Pn(i) == 1)dem++;
        }
        printf("%d\n",dem);
    }
    return 0;
}
