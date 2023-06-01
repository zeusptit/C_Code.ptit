#include <stdio.h>
#include <stdlib.h>
int ucln(int a, int b) {
    int tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++)
    {
        for(int j=m;j<=n;j++)
        {
            if(i!=j && ucln(i,j)==1 && i<j)printf("(%d,%d)\n",i,j);
        }
    }
}
