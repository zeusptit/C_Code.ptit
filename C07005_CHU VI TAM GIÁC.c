#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct triangle{
    float xA,yA,xB,yB,xC,yC;
};

typedef struct triangle triangle;

float length(float xA,float yA,float xB,float yB)
{
    return sqrt(pow((xB - xA),2) + pow((yB - yA),2));
}

float perimeter(float a,float b,float c)
{
    return a + b + c;
}
int main()
{
    int test;
    scanf("%d",&test);
    triangle a;
    while(test--)
    {
        scanf("%f%f%f%f%f%f",&a.xA,&a.yA,&a.xB,&a.yB,&a.xC,&a.yC);
        float l1 = length(a.xA,a.yA,a.xB,a.yB);
        float l2 = length(a.xA,a.yA,a.xC,a.yC);
        float l3 = length(a.xC,a.yC,a.xB,a.yB);
        if(l1 + l2 > l3 && l2 + l3 > l1 && l1 + l3 > l2)printf("%.3f\n",perimeter(l1,l2,l3));
        else printf("INVALID\n");
    }
    return 0;
}
