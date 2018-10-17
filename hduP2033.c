#include <stdio.h>
int main() {
	int n,hA,mA,sA,hB,mB,sB,hT,mT,sT;
	while(scanf("%d", &n)!=EOF) {
		while(n--) {
			scanf("%d%d%d%d%d%d", &hA, &mA, &sA, &hB, &mB, &sB);
			sT = (sA + sB)%60;
			mT = (mA + mB + (sA + sB)/60) % 60;
			hT = hA + hB + (mA + mB + (sA + sB)/60)/60;
			printf("%d %d %d\n", hT, mT, sT);
		}
	}
	return 0;
}
