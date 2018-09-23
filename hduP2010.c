#include <stdio.h>
int main() {
	int m,n,i;
	int temp,save,time;
	while(scanf("%d%d", &m, &n)!=EOF) {
		time = 0;
		for(i = m; i <= n; i++) {
			temp = (i%10)*(i%10)*(i%10) + \
			((i/10)%10)*((i/10)%10)*((i/10)%10) + \
			((i/100)%10)*((i/100)%10)*((i/100)%10);
			if(temp == i) {
				if(time == 0) {
					time = 1;
				} else {
					printf(" ");
				}
				printf("%d", i);
			}
		}
		if(time == 0) {
			printf("no");
		}
		printf("\n");
	}
	return 0;
} 
