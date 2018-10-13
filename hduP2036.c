#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n;
	double sum;
	while(scanf("%d" ,&n) && n!=0) {
		sum = 0.0;
		double* x = (double*)malloc(sizeof(double) * n);
		double* y = (double*)malloc(sizeof(double) * n);
		for(i = 0; i < n; ++i)
			scanf("%lf%lf", &x[i], &y[i]);
		for(i = 0; i < n-1; ++i)
			sum += 0.5*(x[i] * y[i+1] - y[i] * x[i+1]);
		sum += 0.5*(x[n-1]*y[0] - y[n-1]*x[0]);
		printf("%.1lf\n", sum);
		free(x);
		free(y);
	}
	return 0;
}
