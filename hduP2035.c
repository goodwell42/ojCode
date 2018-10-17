#include <stdio.h>
int main() {
	int a,b,i,res;
	while(scanf("%d%d", &a, &b) && (a!=0 || b!=0)) {
		res = 1;
		for(i = 0; i < b; i++) {
			res = res*a % 1000;
		}
		printf("%d\n", res);
	}
	return 0;
}
