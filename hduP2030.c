#include<stdio.h>
int main() {
    int n, sum;
    scanf("%d", &n);
    getchar();
    while(n--){
        sum = 0; 
        char letter;
        while((letter = getchar()) != '\n'){
            if(letter < 0){ // 解题点：汉字机内码的每个字节表示的十进制数都是负数 
                sum++;
            }
        }
        printf("%d\n", sum / 2);
    }
    return 0;
}
