#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    char str[100];
    char words[10][10];
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    scanf("%[^\n]s", str);
    while (str[i] != 0) {
        if (str[i] == ' ') {
            words[k][j] = '\0';
            k++;
            j = 0;
        }
        else {
            words[k][j] = str[i];
            j++;
        }
        i++;
    }
    words[k][j] = '\0';
    j = 0;
    for (i = 0; i < k; i++) {
       
        for (l = 1; l < k + 1; l++) {
            if (words[l][j] == '\0' || l == i)
                continue;
            if (strcmp(words[i], words[l]) == 0) {
                words[l][j] = '\0';
            }
        }
    }
    j = 0;
    for (i = 0; i < k + 1; i++) {
        if (words[i][j] == 0)
            continue;
        else
            printf("%s ", words[i]);
    }
    printf("\n");
    return 0;
}
