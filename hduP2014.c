#include <stdio.h>
int main() {
	int n,min,max,sum,i,num;
	float average;
	while(scanf("%d", &n)!=EOF) {
		average = 0.0;
		min = 100; max = 0; sum = 0;
		for(i = 0; i < n; i++) {
			scanf("%d", &num);
			max = max > num ? max:num;
			min = min < num ? min:num;
			sum += num;
		}
		average = (sum - min -max)/(1.0*(n-2));
		printf("%.2f\n", average);
	}
	return 0;
}
