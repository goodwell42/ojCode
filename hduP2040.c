#include <stdio.h>
int sum(int num) {
	int i;
	int sum = 0;
	for(i = 1; i < num; i++) {
		if(num%i == 0) {
			sum += i;
		}
	}
	return sum;
}
int main() {
	int n,num1,num2;
	scanf("%d", &n);
	while(n--) {
		scanf("%d%d", &num1, &num2);
		if(sum(num1)==num2 && sum(num2)==num1) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}
