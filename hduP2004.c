#include <stdio.h>
#define PI 3.1415927
int main() {
	int grade;
	char point;
	while(scanf("%d", &grade)!=EOF) {
		switch(grade/10)
		{
		    case 10:
		    case 9:
		    	point = 'A';
		    	break;
		    case 8:
		    	point = 'B';
		    	break;
		    case 7:
		    	point = 'C';
		    	break;
		    case 6:
		    	point = 'D';
		    	break;
		    case 5:
		    case 4:
		    case 3:
		    case 2:
		    case 1:
		    case 0:
		    	point = 'E';
		    	break;
		    default:
		   		point = 'X';
		    	break;
		}
		if(point == 'X' || grade < 0) {
			printf("Score is error!\n");
		} else {
			printf("%c\n", point);
		}
	}
	return 0;
} 
