#include <stdio.h>
int main() {
	int i,n,r;
	char a[17] = "0123456789ABCDEF";
	char b[100];
	while(scanf("%d%d", &n, &r)!=EOF) {
		i = 0;
		if(n < 0) {
			printf("-");
			n *= -1;
		}
		while(n) {
			b[i++] = a[n % r];
			n /= r;
		}
		while(i--)
			printf("%c", b[i]);
		printf("\n");
	}
	return 0;
}
