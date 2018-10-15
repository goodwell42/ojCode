#include <stdio.h>
#include <string.h>
#define MAX 1001
int main() {
	int n,i,length,j;
	char arr[MAX];
	scanf("%d", &n);
	getchar();
	while(n--) {
		gets(arr);
		length = strlen(arr);
		for(i = 0; i < length; i++) {
			if(arr[i] == ' ') {
				for(j = i-1; j >= 0; j--) {
					printf("%c", arr[j]);
				}
				printf(" ");
			} else if() {
				
			} 
		}
	}
	return 0;
}
