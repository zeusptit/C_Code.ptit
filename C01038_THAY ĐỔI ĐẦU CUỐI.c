#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    long long n,a,sd,sc,t,p,q;
    scanf("%d",&n);
    p=n;
    q=n;
    sc=n%10;
    while(n>0){
        a=n%10;
        n=n/10;
    }sd=a;
    t=0;
    while(q>=10){
        q=q/10;
        t=t+1;
    }
    p=(p-sd*pow(10,t)-sc)/10;
     if(sc==0){
        printf("%d %d",p,sd);
    }else{
        printf("%d %d %d",sc,p,sd);
     }
}
