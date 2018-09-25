#include <stdio.h>
int main() {
	int i,j,n,m,sum,average,value,first;
	while(scanf("%d%d", &m, &n)!=EOF) {
		value = 2; first = 1;
		for(i = 0; i < m/n; i++) {
			sum = 0;
			for(j = 0; j < n; j++) {
				sum += value;
				value += 2;
			}
			average = sum/n;
			if(first == 0) {
				printf(" %d", average);	
			} else {
				printf("%d", average);
				first = 0;	
			}
		}
		if(m%n != 0) {
			sum = 0; 
			for(j = 0; j < (m%n); j++) {
				sum += value;
				value += 2;
			}
			average = sum/(m%n);
			if(first == 0) {
				printf(" %d", average);	
			} else {
				printf("%d", average);
				first = 0;
			}
		}	
		printf("\n");
	}
	return 0;
}
