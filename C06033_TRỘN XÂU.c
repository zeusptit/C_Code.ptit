#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n;
    while(scanf("%d",&n))
    {
        if(n == 0)break;
        char s1[201],s2[201],s[201];
        getchar();
        scanf("%s%s%s",s1,s2,s);
        char a[402][2],b[402][2];
        char str[402];
        strcpy(str,"");
        int count = 1,kt = 0;
        for(int i=0;i<n;i++)
        {
            a[i][0] = s1[i];a[i][1] = '\0';
            b[i][0] = s2[i];b[i][1] = '\0';
        }
        for(int i=0;i<n;i++)
        {
            strcat(str,b[i]);
            strcat(str,a[i]);
        }
        char d[402];
        strcpy(d,str);
        if(strcmp(d,s) == 0)
        {
            printf("1\n");
        }else{
            char e[402];
            while(strcmp(e,d) != 0)
            {
                strcpy(e,"");
                count++;
                for(int i=0;i<n;i++)
                {
                    a[i][0] = str[i];a[i][1] = '\0';
                    b[i][0] = str[i + n];b[i][1] = '\0';
                }
                strcpy(str,"");
                for(int i=0;i<n;i++)
                {
                    strcat(str,b[i]);
                    strcat(str,a[i]);
                }
                strcpy(e,str);
                if(strcmp(e,s) == 0)
                {
                    kt=1;
                    break;
                }
            }
        }
        if(kt == 1)printf("%d",count);else printf("-1");
        printf("\n");
    }
    return 0;
}
