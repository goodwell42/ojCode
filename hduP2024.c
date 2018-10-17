#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <malloc.h>
#include <math.h>
#define MAX_SIZE 100
int main()
{
    int n;
    char s[MAX_SIZE];
    scanf("%d", &n);
    getchar();//消掉一个空格或者回车 
    while(n--) {
        gets(s);
        int i,len=strlen(s);
        if(isalpha(s[0])||s[0]=='_') {
            for(i=1; i<len; i++) {
                if(isalnum(s[i])||s[i]=='_') {
                	continue;
				} else {
                	break;
				} 
            }
            if(i==len) {
            	printf("yes\n");
			} else {
            	printf("no\n");
			}
        } else {
        	printf("no\n");
		} 
    }
	return 0;
}
