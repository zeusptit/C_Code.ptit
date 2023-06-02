#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int A[n], B[m], intersec[1001], aeb[1001], bea[1001];
    memset(intersec, 0, sizeof(intersec));
    memset(aeb, 0, sizeof(aeb));
    memset(bea, 0, sizeof(bea));
    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
        intersec[A[i]] = 1;
        aeb[A[i]] = 1;
    }
    for(int i = 0; i < m; i++){
        scanf("%d", &B[i]);
        bea[B[i]] = 1;
        if(intersec[B[i]] == 1)
            intersec[B[i]] = 2;
    }
    for(int i = 1; i <= 1000; i++){
        if(intersec[i] == 2)
            printf("%d ", i);
    }
    printf("\n");
    for(int i = 0; i < 1000; i++){
        if(aeb[i] && !bea[i])
            printf("%d ", i);
    }
    printf("\n");
    for(int i = 0; i < 1000; i++){
        if(bea[i] && !aeb[i])
            printf("%d ", i);
    }
}