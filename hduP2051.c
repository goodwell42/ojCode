#include <stdio.h>
int main() {
	int i,n;
	int a[10];
	while(scanf("%d", &n)!=EOF) {
		i = 0;
		while(n) {
			a[i]=n%2;
			n=n/2;
			i++;	
		}
		while(i--)
	 		printf("%d",a[i]);
		putchar('\n'); 
	}
	return 0;
}
