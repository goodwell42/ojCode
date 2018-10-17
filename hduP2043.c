#include <stdio.h>
#include <string.h>
int main() {
	int n,i,tu1,tu2,tu3,tu4;
	int length;
	char arr[51];
	scanf("%d", &n);
	getchar();
	while(n--) {
		tu1 = tu2 = tu3 = tu4 = 0;
		gets(arr);
		length = strlen(arr);
		if( length<8 || length>16) {
			printf("NO\n");
			continue;
		}
		for(i = 0; i < length; i++) {
			if(arr[i]>=65 && arr[i] < 90) {
				tu1 = 1;continue;
			} else if(arr[i]>=97 && arr[i] <= 122) {
				tu2 = 1;continue;
			} else if(arr[i]>=48 && arr[i] <= 57) {
				tu3 = 1;continue;
			} else if(arr[i]>=33 && arr[i] <= 47) {
				tu4 = 1;continue;
			} else if(arr[i]>=58 && arr[i] <= 64) {
				tu4 = 1;continue;
			} else if(arr[i]>=91 && arr[i] <= 96) {
				tu4 = 1;continue;
			} else if(arr[i]>=123 && arr[i] <= 127) {
				tu4 = 1;continue;
			} 
		}
		if((tu1+tu2+tu3+tu4) < 3) {
			printf("NO\n");
		} else {
			printf("YES\n");
		}
	}
	return 0;
}
