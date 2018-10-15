#include <stdio.h>
int main() {
	int num,sum,n;
	while(scanf("%d", &num)!=EOF) {
		sum = 0;
		while(num--) {
			scanf("%d", &n);
			sum += n;
		}
		printf("%d\n", sum);
	}
	return 0;
} 
