#include <stdio.h>
int main() {
	int n,i,time,sum;
	scanf("%d", &n);
	while(n--) {
		sum = 3;
		scanf("%d", &time);
		while(time--) {
			sum = (sum - 1)*2;	
		} 
		printf("%d\n", sum);
	}
	return 0;
}
