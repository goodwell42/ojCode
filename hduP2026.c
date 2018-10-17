#include <string.h>
#include <ctype.h>
#include <stdio.h>
int main() {
	int i;
	char str[105];
	while(gets(str)) {
		if(str[0] != ' ') {
			str[0] = toupper(str[0]);
		}
		for (i = 1; i < strlen(str); i++) {
			if(str[i-1]==' ' && isalpha(str[i])) {
				str[i] = toupper(str[i]);
			}
		}
		printf("%s\n", str);
	}
	return 0;
} 
