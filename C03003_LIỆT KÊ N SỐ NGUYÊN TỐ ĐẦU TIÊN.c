#include <stdio.h>
#include <stdlib.h>

int snt(int n){
    if(n==2)return 1;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)return 0;
    return 1;
}
int main()
{
    int t;
    scanf("%d",&t);
    int i=2,dem=0;
    while(dem<t)
    {
        if(snt(i)==1)
        {
            printf("%d\n",i);
            dem++;
        }
        i++;
    }
}
