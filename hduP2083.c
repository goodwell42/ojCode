#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int m,n,i,j,time,mid;
	scanf("%d", &m);
	while(m--) {
		time = 0;
		scanf("%d", &n);
		int* adr = (int *)malloc(sizeof(int)*n);
		for(i = 0; i < n; i++) {
			scanf("%d", adr+i);
		}
		for(i = 0; i < n; i++) {
			for(j = n-1; j > i; j--) {
				if(adr[j-1] > adr[j]) {
					adr[j-1] = adr[j-1] ^ adr[j];
    				adr[j] = adr[j-1] ^ adr[j];
    				adr[j-1] = adr[j-1] ^ adr[j];
				}
			}
		}
		if(n%2==1) {
			mid = n/2;
			for(i = 0; i < n; i++) {
				time += abs(adr[mid] - adr[i]);
			}
		} else {
			mid = n/2;
			for(i = 0; i < n; i++) {
				j += abs(adr[mid] - adr[i]);
				time += abs(adr[mid-1] - adr[i]);
			}
			if(time > j) {
				time = j;
			}
		}
		printf("%d\n", time);
		free(adr);
	}
	return 0;
}
