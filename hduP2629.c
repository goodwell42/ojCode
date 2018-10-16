#include <stdio.h>
int main() {
	int n,i,month,day,year;
	scanf("%d", &n);
	getchar();
	char a[18];
	while(n--) {
		month = day = year = 0;
		gets(a);
		printf("He/She is from ");
		if(a[0]=='3' && a[1]=='3')
			printf("Zhejiang,and his/her birthday is");
		if(a[0]=='1' && a[1]=='1')
			printf("Beijing,and his/her birthday is");
		if(a[0]=='7' && a[1]=='1')
			printf("Taiwan,and his/her birthday is");
		if(a[0]=='8' && a[1]=='1')
			printf("Hong Kong,and his/her birthday is");
		if(a[0]=='8' && a[1]=='2')
			printf("Macao,and his/her birthday is");
		if(a[0]=='5' && a[1]=='4')
			printf("Tibet,and his/her birthday is");
		if(a[0]=='2' && a[1]=='1')
			printf("Liaoning,and his/her birthday is");
		if(a[0]=='3' && a[1]=='1')
			printf("Shanghai,and his/her birthday is");
		printf(" on ");	
		for(i=10;i<=11;i++)
			printf("%c",a[i]);
		printf(",");
		for(i=12;i<=13;i++)
			printf("%c",a[i]);
		printf(",");
		for(i=6;i<=9;i++)
			printf("%c",a[i]);
		printf(" based on the table.\n");
	}
	return 0;
}
