#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main() {
	int n,i,min,minSub,temp;
	while(scanf("%d", &n) && n!=0) {
		min = INT_MAX;
		minSub = 0;
		int* p = (int *)malloc(sizeof(int) * n); 
		for(i = 0; i < n; i++) {
			scanf("%d", p+i);
			min = min < *(p+i) ? min:(minSub = i,*(p+i));
		}
		temp = *(p+minSub);
		*(p+minSub) = *p;
		*p = temp;
		printf("%d", *p);
		for(i = 1; i < n; i++) {
			printf(" %d", *(p+i));
		}
		printf("\n");
		free(p);
	}
	return 0;
}
