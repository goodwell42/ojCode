#include <stdio.h>
#include <string.h>
int main() {
	int i,length,sum;
	char arr[260];
	while(gets(arr) && arr[0]!='#') {
		sum = 0;
		length = strlen(arr);
		for(i = 0; i < length; i++) {
			if(arr[i] != ' ') {
				sum += (arr[i] - 'A' + 1)*(i+1);
			}
		} 
		printf("%d\n", sum);
	}
	return 0;
}
