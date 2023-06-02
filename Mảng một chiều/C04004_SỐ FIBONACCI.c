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
        int i;
        for( i=0;i<n;i++)
        {
            if(i==0||i==1){A[0]=1;A[1]=1;}
            else A[i]=A[i-1]+A[i-2];
        }
        printf("%lld\n",A[n-1]);
    }
}
