#include <stdio.h> 

int main() 
{ 
    int n, A[100], min; 
    scanf("%d", &n); 
    int j;
    for(int i = 0; i < n; i++) scanf("%d", &A[i]); 
    int d = 1;
    printf("Buoc 0: %d\n",A[0]);
    for(int i = 1; i < n; i++) 
    {  
        int k = A[i];
        j = i - 1;
        while(j >= 0 && A[j] >= k)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = k;
        printf("Buoc %d: ", d); 
        for( int i = 0; i < d+1; i++) printf("%d ", A[i]);
        d++; 
        printf("\n");
    } 
}
