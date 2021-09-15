#include <stdio.h>

void dec_to_bin(int bits, int number) {
    for (int i = 0; i < bits; i++) {
        if (number & 1 << (bits - i - 1)) {
            printf("1");
        }
        else {
            printf("0");
        }
    }
    printf("\n");
}

int main(void) {
    int number = 0;
    int bits = 0;

    while (1) {
        printf("Bitteja (negatiivinen arvo sulkee ohjelman): ");
        scanf("%d", &number);

        if (bits < 0) {
            break;
        }

        printf("Anna luku: ");
        scanf("%d", &number);
        dec_to_bin(bits, number);
    }
    return 0;
}