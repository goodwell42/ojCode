#include <stdio.h>
#include <math.h>
int main() {
	int n,i;
	double m,sum,temp;
	while(scanf("%lf %d", &m, &n)!=EOF) {
		sum = m;
		for(i = 1; i < n; i++) {
			m = sqrt(m);
			sum += m;
		}
		printf("%.2lf\n", sum);
	}
	return 0;
}
