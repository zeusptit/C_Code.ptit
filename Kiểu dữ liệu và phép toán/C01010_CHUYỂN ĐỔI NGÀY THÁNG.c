#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,year,week;
    scanf("%d",&n);
    year=n/365;
    week=(n-year*365)/7;
    printf("%d"" %d"" %d",year,week,n-year*365-week*7);
}
