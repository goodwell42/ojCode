#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	while(scanf("%d", &n) && n!=0) {
		char **arr = (char**)malloc(sizeof(int*)*n);
		for(i = 0; i < n; i++) {
			arr[i] = (char *)malloc(sizeof(int)*16);
		}
		while(n--) {
			getchar();
			scanf("%s", arr[n]);
		} 
		for(i = 0; i < n; i++) {
             free(arr[i]);
		}
		free(arr);
	} 
	return 0;
}
