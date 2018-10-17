#include <stdio.h>
#include <string.h>

//	˳���ʵ�ִ���
typedef struct node{
   char sValue[1005];
   int len;
} bigValue;

//	���ַ�����ֵ������
void inputValue(bigValue *a) {
	int i;
	char data[1005];
	scanf("%s",data);
	a->len = strlen(data);
	for(i = 0; i < a->len; i++) { 
    	a->sValue[i] = data[i];
	}
   	a->sValue[i]='\0';
}

//	�������
void bigVadd(bigValue *a, bigValue *b, bigValue *sum) {
	//c����λ 
	int i, plus=0;
	sum->len = a->len > b->len ? a->len : b->len;
//	���ַ������򣬲�ת������ֵ int 
	
//	��Ӧλ��ӣ���ת�����ַ�����sum�ַ��� 
	for(i = 0; i < sum->len; i++) {
		sum->sValue[sum->len-1-i] = (((a->sValue[i] - '0') + (b->sValue[i] - '0') + plus) % 10) + '0';
		plus = ((a->sValue[i] - '0') + (b->sValue[i] - '0') + plus) / 10; 
	}
//	���λ��λ 
	if(plus != 0) {
		for(i = sum->len-1; i > -1; i--) {
			sum->sValue[i+1] = sum->sValue[i];
		}
		sum->sValue[0] = plus + '0';
		sum->len = sum->len + 1;
	}
	sum->sValue[sum->len] = '\0';
}

int main() {
	bigValue num1, num2, sum;
	int time, i;
	scanf("%d", &time);
	for(i = 0; i < time; i++) {
		inputValue(&num1);
		inputValue(&num2);
		printf("Case ""%d:\n", i+1);
		bigVadd(&num1, &num2, &sum);
		printf("%s"" + ""%s"" = ""%s\n\n", num1, num2, sum);
	}
	return 0;
} 
