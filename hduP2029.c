#include <stdio.h>
#include <string.h>
int main() {
	int i,n,ok,len;
	char arr[101];
	while(scanf("%d", &n)!=EOF) {
		getchar();
		while(n--) {
			gets(arr);
			ok = 1;
			len = strlen(arr);
			for(i = 0; i < len/2; i++) {
				if(arr[i] != arr[len-1-i]) {
					ok = 0;
					break;
				}
			}
			if(ok) printf("yes\n"); 
			else printf("no\n"); 
		}
	}
	return 0;
} 
