#include <stdio.h>
int main() {
	int num,i;
	float temp;
	int num1,num2,num0;
	while(scanf("%d", &num) && num != 0) {
		num1 = 0;num2 = 0;num0 = 0;
		for(i = 0; i < num; i++) {
			scanf("%f", &temp);
			if(temp > 0.0) num2++;
			else if(temp < 0.0) num1++;
		}
		num0 = num - num1 - num2;
		printf("%d %d %d\n", num1, num0, num2);
	}
	return 0;
}
