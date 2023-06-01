#include <stdio.h>
#include <math.h>

int F(int n,int k)
{
    int dem = 0;
    while(n > 1)
    {
        int t = n;
        while(t % k == 0)
        {
            t /= k;
            dem++;
        }
        n--;
    }
    return dem;
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        printf("%d\n",F(n,k));
    }
    return 0;
}
