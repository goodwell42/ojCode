#include <stdio.h>
int c(int n) {
	if(n<=4) {
		return n;
	} else{
		return 	c(n-1)+c(n-3);
	}
}

int main()
{
	int n;
	while(scanf("%d",&n) != EOF && !(n==0))
	{
		printf("%d\n",c(n));
	}
	return 0;
}
