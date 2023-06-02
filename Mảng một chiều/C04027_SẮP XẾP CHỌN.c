#include <stdio.h> 

int main() 
{ 
    int n, A[100], min; 
    scanf("%d", &n); 
    for(int i = 0; i < n; i++) scanf("%d", &A[i]); 
    for(int i = 0; i < n-1; i++) 
    {  
        min = i;
        for(int j = i+1; j < n; j++) if(A[j] < A[min]) min = j;
        if(min != i)
        {
            int temp = A[min];
            A[min] = A[i];
            A[i] = temp;
        }
        printf("Buoc %d: ", i+1); 
        for( int i = 0; i < n; i++) printf("%d ", A[i]); 
        printf("\n");
    } 
    return 0;
}
