#include <stdio.h>
int main() {
	int i,n,y;
	while(scanf("%d", &n)!=EOF) {
		y = 1;
		for(i = 0; i < n-1; i++) {
			y = 2*(y + 1);	
		}
		printf("%d\n", y);
	}
		
	return 0;
}
