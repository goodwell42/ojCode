#include <stdio.h>
int main() {
	long long int a,b,c;
	int n,i;
	while(scanf("%d", &n) && n!=-1) {
		a = 1; b = 0;
        for(i = 0; i < n; i++) {
            c = a*3+b*2;
            b = a+b;
            a = c;
        }
        printf("%lld, %lld\n",a,b);
	}
	return 0;
}
