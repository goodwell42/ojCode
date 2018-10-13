#include <stdio.h>
#include <stdlib.h>
int main() {
	int m,n,i,j,o,k,temp;
	while(scanf("%d%d", &n, &m) && (m!=0 || n!=0)) {
		k = 0;
		int* num1 = (int*) malloc(sizeof(int)*n);
		int* num2 = (int*) malloc(sizeof(int)*m);
		for(i = 0; i < n; i++) {
			scanf("%d", &num1[i]);
		}
		for(i = 0; i < m; i++) {
			scanf("%d", &num2[i]);
		}
		for(i = 0; i < n-k; i++) {
			for(j = 0; j < m; j++) {
				if(num1[i] == num2[j]) {
					for(o = i; o < n-k-1; o++) {
						num1[o] = num1[o+1];
					}
					k++;
					i--;
					break;
				}
			}
		}
		if(k == n) {
			printf("NULL");
		} else {
			o = n - k;
			for(i = 0; i < o; i++) {
				for(j = o-1; j > i; j--) {
					if(num1[j-1] > num1[j]) {
						temp = num1[j];
						num1[j] = num1[j-1];
						num1[j-1] = temp;
					}
				}
			}
			for(i = 0; i < o; i++) {
				printf("%d ", num1[i]);
			}
		}
		printf("\n");
		free(num1);
		free(num2);
	}
	return 0;
}
