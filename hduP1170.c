#include <stdio.h>
int main() {
	int a,b,n;
	char c;
	scanf("%d", &n);
	while(n--) {
		getchar();
		scanf("%c%d%d", &c, &a, &b);
		switch(c) {
			case '+': printf("%d\n", a+b);
				break;
			case '-': printf("%d\n", a-b);
				break;
			case '*': printf("%d\n", a*b);
				break;
			case '/': if(a%b != 0) 	printf("%.2lf\n", 1.0*a/b);
				else printf("%d\n", a/b);
				break;
		}
	}
	return 0;
}
