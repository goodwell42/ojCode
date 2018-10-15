#include <stdio.h>
int main() {
	int num,sum,n,time;
	scanf("%d", &num);
	while(num--) {
		scanf("%d", &time);
		sum = 0;
		while(time--) {
			scanf("%d", &n);
			sum += n;
		}
		if(num!=0) {
			printf("%d\n\n", sum);
		} else {
			printf("%d\n", sum);
		}
	}
	return 0;
} 
