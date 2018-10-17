#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,i;
	while(scanf("%d%d", &n, &m),n!=0 || m!=0) {
		int* p = (int*)malloc(sizeof(int)*(n+1));
		for(i = 0; i < n; i++) {
			scanf("%d", p+i);
		}
		for(i = n-1; m < p[i]; i--) {
			p[i+1] = p[i];
		} 
		p[i+1] = m;
		printf("%d", *p);
		for(i = 1; i < n+1; i++) {
			printf(" %d", *(p+i));
		}
		printf("\n");
		free(p);
	}
	return 0;
}
