#include <stdio.h>
#include <string.h>
int main() {
	int n,count,i,j,m;
	char s[100];
	while(scanf("%d", &n)!=EOF) {
		for(i = 0; i < n; i++) {
			count = 0;
			scanf("%s",&s);
			m = strlen(s);
			for(j = 0; j < m; j++) {
				if(s[j]>='0' && s[j]<='9') {
					count++;
				}
			}
			printf("%d\n", count);
		}
	}
	return 0;
}
