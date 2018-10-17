#include <stdio.h>
int main() {
	int num,i,j;
	int val;
	double res,size;
	while(scanf("%d", &num)!=EOF) {
		for(i = 0; i < num; i++) {
			res = 0.0;
			size = -1.0;
			scanf("%d", &val);
			for(j = 1; j <= val; j++) {
				size *= -1.0;
				res += size/j;
			}
			printf("%.2lf\n", res);
		}
	}
	return 0;
}
