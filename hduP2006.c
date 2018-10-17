#include <stdio.h>
int main() {
	int num,val,i,res;
	while(scanf("%d", &num)!=EOF) {
		res = 1;
		for(i = 0; i < num; i++) {
			scanf("%d", &val);
			if(val%2==1) {
				res = res * val;
			}
		}
		printf("%d\n", res);
	}
	return 0;
} 
