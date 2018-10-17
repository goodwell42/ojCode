#include <stdio.h>
int main() {
	int n,i;
	long long int rm,mar;
	while(scanf("%d", &n)!=EOF)
	while(n--) {
		scanf("%6lld%5lld", &rm, &mar);
		printf("%d\n", 600000+mar);
	}
	return 0;
} 
