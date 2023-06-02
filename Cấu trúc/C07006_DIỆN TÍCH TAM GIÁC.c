#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct triangle{
    double xA,yA,xB,yB,xC,yC;
};

typedef struct triangle triangle;

double length(double xA,double yA,double xB,double yB)
{
    return sqrt(pow((xB - xA),2) + pow((yB - yA),2));
}

double area(double a,double b,double c)
{
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
int main()
{
    int test;
    scanf("%d",&test);
    triangle a;
    while(test--)
    {
        scanf("%lf%lf%lf%lf%lf%lf",&a.xA,&a.yA,&a.xB,&a.yB,&a.xC,&a.yC);
        double l1 = length(a.xA,a.yA,a.xB,a.yB);
        double l2 = length(a.xA,a.yA,a.xC,a.yC);
        double l3 = length(a.xC,a.yC,a.xB,a.yB);
        if(l1 + l2 > l3 && l2 + l3 > l1 && l1 + l3 > l2)printf("%.2lf\n",area(l1,l2,l3));
        else printf("INVALID\n");
    }
    return 0;
}
