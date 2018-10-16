#include <stdio.h>
int main() {
	int n = 12;
	double average,money;
	average = 0;
	while(n--) {
		scanf("%lf", &money);
		average += money;
	}
	printf("$%.2lf\n", average/12);
	return 0;
}
