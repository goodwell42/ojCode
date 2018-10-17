#include <stdio.h>
int main() {
	int year, month, day, time;
	while(scanf("%d/%d/%d", &year, &month, &day)!=EOF) {
		int leap = 0;
		if((year%4==0 && year%100!=0) || (year%400==0)) {
			leap = 1;
		}
		if(month < 3) {
			time = (month-1)*31 + day;
		} else if (month < 8) {
			time = leap + 59 + (31*(month>3) + 30*(month>4) + 31*(month>5) + 30*(month>6)) + day;
		} else {
			time = leap + 212 + (31*(month>8) + 30*(month>9) + 31*(month>10) + 30*(month>11)) + day;
		}
		printf("%d\n", time);
	}
	return 0;
}
