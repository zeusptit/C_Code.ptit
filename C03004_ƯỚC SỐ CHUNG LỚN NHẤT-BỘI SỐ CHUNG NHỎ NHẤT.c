#include <stdio.h>
#include <stdlib.h>
long long uscln(long long a,long long b)
{   
    if(a==0)return b;if(b==0)return a;
    if(a>=b)for(int i=b;i>=1;i--)if(a%i==0&&b%i==0){return i;break;}
    if(a<b)for(int j=a;j>=1;j--)if(a%j==0&&b%j==0){return j;break;}
}

int main()
{
    long long m,n;
    scanf("%lld%lld",&m,&n);
    long long bscnn;
    bscnn=m*n/uscln(m,n);
    printf("%lld\n%lld",uscln(m,n),bscnn);
}
