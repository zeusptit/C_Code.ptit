#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n,m,k;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &k);
    int vt[1001];// vi tri
    int cs[2002]={0};// chieu sang
    int i,j,idx;
    for (i=0; i<m; i++)	
    {
        scanf("%d", &vt[i]);
        for (j=vt[i]; j <= vt[i]+k; j++) cs[j]=1;
        for (j=vt[i]; j >= vt[i]-k; j--) if (j >= 1) cs[j] = 1; else break;
    }
    int dem = 0;
    int left,right;
    for (i=1; i<=n; i++)
    {
        if (cs[i] == 0) 
        {
            left = i;
            j = i + 1;
            while ( j <= n && cs[j] == 0 ) j++;
            right = j - 1;
            int temp = (right - left) / (2 * k + 1);
            dem = dem + temp + 1;  
            for (idx=left; idx <= right; idx++) cs[idx] = 1;
        }
    }
    printf("%d", dem);
}
