#include <stdio.h>
int main() {
	double r;
	while(scanf("%lf", &r)!=EOF) {
		if(r/1<0) {
			r = -r;
		}
		printf("%.2lf\n", r);
	}
	return 0;
} 
