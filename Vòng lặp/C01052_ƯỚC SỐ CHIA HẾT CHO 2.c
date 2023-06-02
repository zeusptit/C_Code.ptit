#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int test;
    scanf("%d",&test);
    while(test--)
    {
        long long n;
        scanf("%lld",&n);
        int dem=0;
        int i=1;
        while(i<=n/i)
        {
	        if(n%i==0)
	        {
	            if(i % 2 == 0)dem++;
	            if(n/i % 2 == 0)dem++;
	            if(n/i == i && i % 2 == 0)dem--;
	        }
	      	i++; 
    	}
        printf("%d\n",dem);
    }
    return 0;
}
