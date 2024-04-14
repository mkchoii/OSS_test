// 보충문제3
#include <stdio.h>

int main() {
    int n, cnt=0;
    double p;
    do {
        printf("1) 3부터 18사이의 값을 입력하세요 : ");
        scanf("%d", &n);
    } while((n<3) || (n>18));
    printf("\n2) 모든 경우\n");
    for (int i=1; i<=6; i++) {
        for (int j=1; j<=6; j++) {
            for (int k=1; k<=6; k++) {
                if(i+j+k==n) {
                    printf("(%d, %d, %d) ",i,j,k);
                    cnt++;
                }
            }
        }
    }
    p = (double)cnt/(6*6*6)*100;
    printf("\n\n3) 확률 : %.2lf\n", p);
    return 0;
}