#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Tien[10]={1,2,5,10,20,50,100,200,500,1000};

int main(int argc, char *argv[]) {
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        int dem = 0;
        if(n >= 1000)
        {
            dem = dem + n/1000;
            n = n % 1000;
        }
        for(int i=9;i>=0;i--)
        {
            while(n > 0 && n >= Tien[i])
            {
                n = n - Tien[i];
                dem++;
            }
        }
        printf("%d\n",dem);
    }
}
