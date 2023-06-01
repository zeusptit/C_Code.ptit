#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int test;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        char str[100];
        gets(str);
        int length = strlen(str);
        int num[100];
        int i;
        for(i=0;i<length;i++)
        {
            switch(str[i])
            {
                case 'I':
                    num[i]=1;
                    break;
                case 'V':
                    num[i]=5;
                    break;
                case 'X':
                    num[i]=10;
                    break;
                case 'L':
                    num[i]=50;
                    break;
                case 'C':
                    num[i]=100;
                    break;
                case 'D':
                    num[i]=500;
                    break;
                case 'M':
                    num[i]=1000;
                    break;
            }
        }
        int sum = 0;
        for( i=0;i<length-1;i++)
        {
            if(num[i] < num[i + 1])sum -= num[i];else sum += num[i];
        }
        sum += num[length - 1];
        printf("%d\n",sum);
    }
    return 0;
}
