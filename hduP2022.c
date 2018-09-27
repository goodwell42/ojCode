#include <stdio.h>
#include <math.h>
int main() {
	int m,n,i,j,max,maxX,maxY,num;
	while(scanf("%d%d", &m, &n)!=EOF) {
		max = 0;
		for(i = 0; i < m; i++) {
			for(j = 0; j < n; j++) {
				scanf("%d", &num);
				if(abs(num) > abs(max)) {
					maxX=i+1; maxY=j+1;
					max = num;
				}
			}
		}
		printf("%d %d %d\n", maxX, maxY, max);
	}
	return 0;
} 
