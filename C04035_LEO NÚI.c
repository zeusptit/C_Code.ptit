#include <stdio.h>

int min_val(int a, int b){
	if(a > b)return b;
	return a;
}

int main(){
	int n; 
	scanf("%d", &n);
	int T[n], D[n];
	int minT = 50001, minD = 50001;
	long long sumT = 0, sumD = 0;
	for(int i = 0; i < n; i++){
		scanf("%d %d", &T[i], &D[i]);
		minT = min_val(minT, T[i]);
		minD = min_val(minD, D[i]);
		sumT += T[i];
		sumD += D[i];
	}
	long long res;
	if(sumT < sumD)
		res = minT + sumD;
	if(sumD < sumT)
		res = minD + sumT;
	printf("%lld", res);
}