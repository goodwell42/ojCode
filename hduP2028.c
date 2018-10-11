#include <stdio.h>
#include <stdlib.h>
int gcd(int a,int b) 
{
	if(a < b) {
		int temp;
		temp = b;
		b = a;
		a = temp; 
	}
	if(b == 0)
		return a;
	return gcd(b, a%b);
}

int main() {
	int i,n;
	while(scanf("%d", &n)!=EOF) {
		int* num = malloc(sizeof(int)*n);
		for(i = 0; i < n; i++) {
			scanf("%d", num+i);
		}
		for(i = 0; i < n-1; i++) {
			num[i+1] = num[i]/gcd(num[i],num[i+1])*num[i+1];
		}
		printf("%d\n", num[i]);
		free(num);
	}
	return 0;
}
