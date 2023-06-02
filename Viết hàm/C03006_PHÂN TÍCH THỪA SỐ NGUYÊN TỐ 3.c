#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int snt(int a)
{
    for(int i=2;i<=sqrt(a);i+=2)if(a%i==0)return 0;
    return 1;
}
int main()
{
    int test;
    scanf("%d",&test);
    int dt=1;
    while(test--)
    {
        int n;
        scanf("%d",&n);
        int dem=0;
        int j=2;
        printf("Test %d: ",dt);
        dt++;
        while(n>1)
        {
                while(snt(j)==1&&n%j==0)
                {
                    n=n/j;
                    dem++;
                    if(n%j!=0)printf("%d(%d) ",j,dem);
                }
            dem=0;
            j++;
        }
        printf("\n");
    }
}
