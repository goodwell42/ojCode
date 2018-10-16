#include <stdio.h>
int func(char ch) {
	if(ch <= 'z' && ch >= 'a') {
		return (-(ch-'a'+1));
	} else if(ch <= 'Z' && ch >= 'A') {
		return (ch-'A'+1);
	} else {
		return -1; 
	} 
}
int main() {
	int n,num;
	char ch;
	scanf("%d", &n);
	while(n--) {
		getchar();
		scanf("%c%d", &ch, &num);
		printf("%d\n", num+func(ch));
	}
	return 0;
} 
