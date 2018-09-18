#include <stdio.h>
#include <string.h>

//	顺序表实现大数
typedef struct node{
   char sValue[1003];
   int len;
} bigValue;

//	将字符串赋值到串里,并反序处理 
void inputValue(bigValue *a) {
	int i,j;
	char ch;
	char data[1003];
	while(scanf("%c",&ch) && ch != ' ') {
   		data[i] = ch;
		i++;
	}
	data[i] = '\0';
	j=strlen(data);	
	for(i = 0; i < j; i++) { 
    	a->sValue[i]=data[j-i];
	}
   	a->sValue[i]='\0';
	a->len=j;
}

//	大数相加
void bigVadd(bigValue *a, bigValue *b, bigValue *sum) {
	//c：进位 
	int i, c;
	sum->len = a->len > b->len ? a->len : b->len;
	for(i = 0; i < sum->len+1; i++) {
		sum->sValue[sum->len-i] = ((a->sValue[i] + b->sValue[i] + c) % 10) + '0';
		c = (a->sValue[i] + b->sValue[i] + c) / 10; 
	}
	sum->sValue[sum->len+1] = '\0';
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

