#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
int main() {
	int n,i,j,min,temp;
	while(scanf("%d", &n),n!=0) {
		int* p = (int*)malloc(sizeof(int)*n);
		for(i = 0; i < n; i++) {
			scanf("%d", p+i);
		}
		min = INT_MAX;
		for(i = 0; i < n; i++) {
			for(j = 0; j < n-i; j++) {
				if(abs(min) > abs(p[j])) {
					temp = min;
					min = p[j];
					p[j] = temp;
				}
			}
			temp = min;
			min = p[j-1];
			p[j-1] = temp;
		}
		printf("%d", *p);
		for(i = 1; i < n; i++) {
			printf(" %d", *(p+i));
		}
		printf("\n");
		free(p);
	}
	return 0;
}
