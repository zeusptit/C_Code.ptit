#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int cmp(const void *a,const void *b)
{
    int *x = (int *)a;
    int *y = (int *)b;
    return *x - *y;
}
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        int a[100001];
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        qsort(a,n,sizeof(int),cmp);
        int min = 99999999;
        int count = 0;
        for(int i=0;i<n-1;i++)
        {
            int dis = abs(a[i] - a[i + 1]);
            if(min > dis)min = dis;
        }
        for(int i=0;i<n-1;i++)
        {
            if(abs(a[i] - a[i + 1]) == min)count++;
        }
        printf("%d %d\n",min,count);
    }
} 
