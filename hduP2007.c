#include <stdio.h>
int main() {
	int m,n,i;
	int res1,res2;
	while(scanf("%d%d", &m, &n)!=EOF) {
		if(m > n) {
			i = m;
			m = n;
			n = i;
		}
		res1 = 0;
		res2 = 0;
		for(i = m; i < n+1; i++) {
			if(i%2==0) {
				res1 += i*i;	
			} else {
				res2 += i*i*i;
			}
		}
		printf("%d %d\n", res1, res2);
	}
	return 0;
}
