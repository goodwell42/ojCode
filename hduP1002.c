#include <stdio.h>
#include<string.h>
//˳���ʵ�ִ��� 
typedef struct node{
   char sValue[1003];
   int len;
} bigValue;

void init(bigValue *a,char *data){//���ַ�����ֵ�����
   int i,j;
   j=strlen(data);
   for(i = 0; i < j; i++) {
    	a->sValue[i]=0;//? �²�����˭ 
    	a->sValue[i]=data[i];
	}
   	a->s[i]='\0';
	a->len=j;
}

 

int main() {
	int num, i;
	scanf("%d", &num);
	for(i = 0; i < num; i++) {
//		scanf
		printf("Case ""%d:\n", i+1);
	}
	return 0;
} 
