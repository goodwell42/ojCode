#include <stdio.h>
int main() {
	int n,i,sum;
	scanf("%d", &n);
	while(n--) {
		sum = 3;
		scanf("%d", &i);
		sum = 2*i*i-i+1;
		printf("%d\n", sum);
	}
	return 0;
}
