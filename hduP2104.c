#include <stdio.h>
int gcd(int a , int b) {
    return a % b ? gcd(b , a % b) : b;
}
int main() {
	int n,m;
	while(scanf("%d%d", &n, &m) && (n!=-1 || m!=-1)) {
		printf(gcd(m , n) == 1 ? "YES\n" : "POOR Haha\n");
	}
	return 0;
} 
