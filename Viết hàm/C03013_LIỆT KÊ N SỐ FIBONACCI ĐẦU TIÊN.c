#include <stdio.h>
#include <stdlib.h>
long long F(int n)
{
    if(n==1||n==2)return 1;
    return F(n-1)+F(n-2);
}
int main()
{
    int n;
    scanf("%d",&n);
    int dem=2,i=1;
    printf("0 ");
    while(dem<=n)
    {
        printf("%d ",F(i));
        i++;
        dem++;
    }
}
