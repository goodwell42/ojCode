#include <stdio.h>
int main() {
	int n;
	while(scanf("%d", &n)!=EOF) {
//		printf("%d\n\n", n*(n+1)/2);
// 		WA 
	printf("%d\n\n", n%2==0 ? n/2*(n+1) : (n+1)/2*n);
	}
	return 0;
}
