#include <stdio.h>
int main() {
	int n,num,i;
	double max,value;
	scanf("%d", &n);
	while(n--) {
		max = -1;
		scanf("%d", &num);
		while(num--) {
			scanf("%lf", &value);
			if(value > max) {
				max = value;
			}
		}
		printf("%.2lf\n", max);
	}
	return 0;
}
