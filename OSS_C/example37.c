// 보충문제4
#include <stdio.h>

int main() {
    int input, temp, output=0;
    do {
        printf("숫자를 입력하세요 : ");
        scanf("%d", &input);
    } while(input<=0);

    printf("결과 : ");
    //temp = input;
    while(1) {
        output = input%10;
        input /= 10;
        printf("%d", output);
        if (input==0) break;
    }

    return 0;
}