#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long long max(long long x,long long y)
{
    if(x >= y)return x;
    else return y;
}
int main(int argc, char *argv[]) {
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        int A[100000];
        for(int i=0;i<n;i++)scanf("%d",&A[i]);
        int i,j;
        long long tong = 0,tongmax = 0;
        for(i=0;i<n;i++)
        {
            tong = max(A[i],tong + A[i]);
            tongmax = max(tong,tongmax);
        }
        printf("%lld\n",tongmax);
    }
    return 0;
}
