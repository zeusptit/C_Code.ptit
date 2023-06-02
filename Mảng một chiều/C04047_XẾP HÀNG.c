#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int max(int x,int y)
{
    if(x >= y)return x;else return y;
}
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    int T[100],D[100];
    int i,j,min;
    for(i=0;i<n;i++)scanf("%d%d",&T[i],&D[i]);
    int t = 0,b = 0;
    for(i=0;i<n-1;i++)
    {
        min = i;
        for(j=i+1;j<n;j++)if(T[j] < T[min])min = j;
        if(min != i)
        {
            swap(&T[i],&T[min]);
            swap(&D[i],&D[min]);
        }
    }
    for(i=0;i<n;i++)
    {
        if(t <= T[i])t = T[i] + D[i];
        else t = t + D[i];
    }
    printf("%d",t);
    return 0;
}
