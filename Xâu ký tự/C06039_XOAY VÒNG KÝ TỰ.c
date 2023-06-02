#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int roll(char x1[100], char x2[100])
{
    char dest[100], src[100];
    strcpy(dest, x1);
    strcpy(src, x2);
    int len = strlen(src);
    char temp[] = " ";
    int i=0;
    if  (strcmp(dest, src) == 0) return i;
    while (i < len)
    {
        temp[0] = src[0];
        strcat(src, temp);
        strcpy(src, src+1);
        i++;
        if  (strcmp(dest, src) == 0) return i;
    }
    return -1;
}
int main(int argc, char *argv[]) {
    int n,i, kt= 1, temp,j;
    int s1[100][100];
    scanf("%d\n", &n);
    for (i=0; i<n; i++)scanf("%s", s1[i]);
    i = 0;
    int min = 999999999;
    while ((min != -1) && i < n)
    {
        int count = 0;
        for (j=0; j<n; j++)
        {
            if (j == i) continue;
            temp = roll(s1[i], s1[j]);
            if (temp == -1) 
            { 
                count =-1; 
                break;
            }
            count = count + temp;
        }
        if (min > count ) min = count;
        i++;
    }
    printf("%d", min);
    return 0;
}v
