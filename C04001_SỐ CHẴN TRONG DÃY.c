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
        int A[1000];
        for(int i=0;i<n;i++)scanf("%d",&A[i]);
        for(int i=0;i<n;i++)
        {
            if(A[i]%2==0)printf("%d ",A[i]);
        }
        printf("\n");
    }
}
