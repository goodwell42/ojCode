#include <stdio.h>
#include <string.h>
#define MAXSIZE 606
int main() {
	int i;
	char str[MAXSIZE];
	char max,temp;
	while(gets(str)) {
		max = 'A';
		for(i = 0; i < strlen(str); i++) {
			if(max < str[i]) {
				max = str[i];
			}
		}
		for(i = 0; i < strlen(str); i++) {
			if(max == str[i]) {
				printf("%c(max)", str[i]);
			} else {
				printf("%c", str[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
