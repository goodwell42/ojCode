#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	int **p;
	while(scanf("%d", &n)!=EOF) {
		p = (int **) malloc(sizeof(int *) * n);
		for(i = 0; i < n; i++)
        	p[i] = (int *)malloc(sizeof(int) * n);
        for(i = 0; i < n; i++) {
        	p[i][0] = 1;
        	p[i][i] = 1;
		}
		for(i = 2; i < n; i++) {
			for(j = 1; j < i; j++) {
				p[i][j] = p[i-1][j-1] + p[i-1][j];
//				printf("hi");
			}
		}
		for(i = 0; i < n; i++) {
			for(j = 0; j <= i; j++) {
				if(j == i)
					printf("%d", p[i][j]);
				else
					printf("%d ", p[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
