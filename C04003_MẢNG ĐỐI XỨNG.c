#include <stdio.h>
#include <stdlib.h>

int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        long long A[1000];
        for(int i=0;i<n;i++)scanf("%lld",&A[i]);
        int dem=0;
        for(int i=0;i<n;i++)
        {
            if(A[i]!=A[n-i-1]&&i<(n-i-1))dem++;
        }
        if(dem==0)printf("YES");else printf("NO");
        printf("\n");
    }
}
