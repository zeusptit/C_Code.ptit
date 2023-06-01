#include <stdio.h> 

void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() 
{ 
    int n, A[100], min; 
    scanf("%d", &n); 
    for(int i = 0; i < n; i++) scanf("%d", &A[i]); 
    for(int i = 0; i < n-1; i++) 
    { 
        for(int j = i; j < n; j++) 
        { 
            if(A[i] >= A[j]) 
            { 
                swap(&A[i],&A[j]);
            } 
        } 
        printf("Buoc %d: ", i + 1); 
        for( int i = 0; i < n; i++) printf("%d ", A[i]); 
        printf("\n");
    } 
}
