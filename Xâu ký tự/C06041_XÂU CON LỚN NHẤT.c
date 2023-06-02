#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void processing(char s[])
{
    int len_max = strlen(s);
    char *p,i;
    int j, temp;
    for (i='z'; i>='a'; i--)
    {
        temp = strlen(s) - len_max;
        p = strchr(s + temp, i);
        if (p != NULL)
        {
            if (strlen(p) <= len_max)
            {
                while (p != NULL)
                {
                    printf("%c",p[0]);
                    len_max = strlen(p);
                    p = strchr(p+1, i);
                }
            }
        }
    }
}


int main(int argc, char *argv[]) {
    char s[100001];
    gets(s);
    processing (s);
    return 0;
}
