#include <stdio.h>
#include <string.h>
int main() {
	int n,i,j,len;
	char arr[101];
	char ch[5] = {'a','e','i','o','u'};
	while(scanf("%d\n", &n)!=EOF) {
		while(n--) {
			int num[5] = {0};
			gets(arr);
			for (i = 0; i < strlen(arr); i++)
                for (j = 0; j < 5; j++)
                    if (arr[i] == ch[j]) num[j]++;
            for (i = 0; i < 5; i++)
                printf("%c:%d\n", ch[i], num[i]);
            if (n) printf("\n");
		}
	}
	return 0;
}
