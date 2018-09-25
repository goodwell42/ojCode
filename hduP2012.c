#include <stdio.h>
int main() {
	int x,y,ok,i,j,n;
	while(scanf("%d%d", &x, &y) && (x!=0 || y!=0)) {
		ok = 1;
		for(i = x; i <= y; i++) {
			n = i*i + i + 41;
			for(j = 2; j < n; j++) {
				if(n%j == 0) {
					ok = 0;
					break;
				}
			}
			if(ok == 0) {
				break;
			}
		}
		if(ok == 0) {
			printf("Sorry\n");
		} else {
			printf("OK\n");
		}
	}
	return 0;
} 
