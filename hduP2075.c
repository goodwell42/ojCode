#include <stdio.h>
int main()
{
	int t, a, b;
	scanf("%d", &t);
	while(t--) {
		scanf("%d%d", &a, &b);
		printf(a % b == 0 ? "YES\n" : "NO\n");
	}
	return 0;
}
