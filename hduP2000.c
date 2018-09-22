#include <stdio.h>
int main() {
	char a, b, c, t;
	while(scanf("%c%c%c", a, b, c)!=EOF) {
		max = a>b ?  : t=b,b=a,a=t;
		max = a>c ?  : t=c,c=a,a=t;
		printf("%c %c %c\n", a, b, c);
	}
	return 0;
} 
