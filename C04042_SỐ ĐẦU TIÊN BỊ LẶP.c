#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int A[100001];
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&A[i]);
        }
        int kt = 1;
        for(int i=0;i<n-1;i++)
        {
            if(kt == 0)break;
            for(int j=i+1;j<n;j++)
            {
                if(A[i] == A[j])
                {
                   printf("%d\n",A[j]);
                   kt = 0;
                   break;
                }
            }
        }
        if(kt == 1)printf("NO\n");
    }
}
