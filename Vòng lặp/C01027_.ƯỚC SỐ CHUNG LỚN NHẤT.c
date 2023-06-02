    #include <stdio.h>
    #include <stdlib.h>
    int main()
    {
        int a,b,m,n,test,i;
        scanf("%d",&test);
        while(test--){
            scanf("%d""%d",&a,&b);
           if(a==b){
            printf("%d\n",a);
           }
           if(a>b){
            for(i=b;i>0;i--){
                if(a%i==0&&b%i==0){
                    printf("%d\n",i);
                    break;
                }
            }
           }else{
           if(a<b)
            for(i=a;i>0;i--)
                if(a%i==0&&b%i==0)
                    printf("%d\n",i);
                    break;
           }
        }
    }
