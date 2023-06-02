#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int cmp(const void *a,const void *b)
{
    int *x = (int *)a;
    int *y = (int *)b;
    return *x - *y;
}
int search(long A[],int l,int r,long x)
{
    if(r >= l)
    {
        int mid = l +(r - l)/2;
        if(A[mid] == x)return mid;
        if(A[mid] > x)return search(A,l,mid - 1,x);
        return search(A,mid + 1,r,x);
    }
    return -1;
}

int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n,i,j;
        scanf("%d",&n);
        long A[5002];
        for(i=0;i<n;i++)scanf("%ld",&A[i]);
        int kt = -1;
        double T;
        long s;
        qsort(A,n,sizeof(long),cmp);
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                T = sqrt(A[i] * A[i] + A[j] * A[j]);
                s = (long)T;
                if(s == T)kt = search(A,j + 1,n - 1,s);
                if(kt != -1)break;
            }
            if(kt != -1)break;
        }
        if(kt != -1)printf("YES\n");else printf("NO\n");
    }
}
