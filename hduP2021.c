#include <stdio.h>
int main() {
	int n,i,temp,sum;
	int count;
	while(scanf("%d\n", &n),n!=0) {
		sum = 0;
		for(i = 0; i < n; i++) {
			scanf("%d", &temp);
			count = temp/100 + (temp%100)/50 + (temp%50)/10 + (temp%10)/5 + ((temp%5 == 1)||(temp%5 == 2)) + 2*((temp%5 == 3)||(temp%5 == 4));
			sum += count;
		}
		printf("%d\n", sum);
	}
	return 0;
}
