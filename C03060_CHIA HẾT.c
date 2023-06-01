#include <stdio.h>
#include <math.h>

int F(int n)
{
    int dem=0;
    while(n > 1)
    {
        int t = n;
        while(t % 2 == 0)
        {
            t/=2;
            dem++;
        }
        n--;
    }
    return dem;
}
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    if(F(n) >= k)printf("Yes");else printf("No");
    return 0;
}
