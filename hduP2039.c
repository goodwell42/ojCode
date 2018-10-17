#include <stdio.h>
int main() {
	int i,n;
	double a,b,c;
	scanf("%d", &n);
	while(n--) {
		scanf("%lf%lf%lf", &a, &b, &c);
		if(a+b>c && a+c>b && b+c>a)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
