#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int test;
    scanf("%d",&test);
    int t = 1;
    while(test--)
    {
        int n;
        scanf("%d",&n);
        int A[10000],i;
        for(i=0;i<n;i++)scanf("%d",&A[i]);
        int B[10000] = {0};
        printf("Test %d:\n",t);
        for(i=0;i<n;i++)B[A[i]]++;
        for(i=0;i<n;i++)
        {
            if(B[A[i]] >= 1)  
            {
                printf("%d xuat hien %d lan\n",A[i],B[A[i]]);
                B[A[i]] = 0;
            }
        }
        t++;
    }
    return 0;
}
