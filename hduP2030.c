#include<stdio.h>
int main() {
    int n, sum;
    scanf("%d", &n);
    getchar();
    while(n--){
        sum = 0; 
        char letter;
        while((letter = getchar()) != '\n'){
            if(letter < 0){ // ����㣺���ֻ������ÿ���ֽڱ�ʾ��ʮ���������Ǹ��� 
                sum++;
            }
        }
        printf("%d\n", sum / 2);
    }
    return 0;
}
