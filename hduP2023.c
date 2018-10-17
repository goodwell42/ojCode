#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,i,j,sum,count,good;
	while(scanf("%d%d\n", &n, &m)!=EOF) {
		int **grade = (int **)malloc(n*sizeof(int *));
		for(i=0;i<n;i++)
			grade[i] = (int *)malloc(m*sizeof(int));
		double* av1 = (double*)malloc(sizeof(double)*n);
		double* av2 = (double*)malloc(sizeof(double)*m);
		count = 0; 
		for(i = 0; i < n; i++) {
			sum = 0;
			for(j = 0; j < m; j++) {
				scanf("%d", *(grade+i)+j);
				sum += grade[i][j];
			}
			av1[i] = sum/(1.0*m);
		}
		printf("%.2lf",av1[0]);
		for(i = 1; i < n; i++) {
			printf(" %.2lf",av1[i]);
		}
		printf("\n");
		for(j = 0; j < m; j++) {
			sum = 0;
			for(i = 0; i < n; i++) {
				sum += grade[i][j];
			}
			av2[j] = sum/(1.0*n);
		}
		printf("%.2lf",av2[0]);
		for(j = 1; j < m; j++) {
			printf(" %.2lf",av2[j]);
		}
		printf("\n");
		for(i = 0; i < n; i++) {
			good = 1;
			for(j = 0; j < m; j++) {
				if(grade[i][j] < av2[j]) {
					good = 0;
					break;
				}
			}
			if(good == 1) {
				count++;
			}
		}
		printf("%d\n\n", count);
		free(av2);
		free(av1);
		for (i = 0; i < n; i++)
			free(grade[i]);/*释放列*/
		free(grade);/*释放行*/
	}
	
	return 0;
}
