// 보충문제2
#include <stdio.h>

int main() {
    for (int i=0; i<5; i++) {
        for (int k=0; k<4-i; k++) printf(" ");
        for (int j=0; j<=i; j++) printf("* ");
        printf("\n");
    }
    for (int l=0; l<4; l++){
        for (int m=0; m<=l; m++) printf(" ");
        for (int n=4; n>l; n--) printf("* ");
        printf("\n");
    }

    return 0;
}