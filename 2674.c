#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) == 1) {
        if (n < 2) {
            printf("Nada\n");
            continue;
        }
        int nada = 0;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                nada = 1; 
                break;
            }
        }
        if (nada == 1) {
            printf("Nada\n");
        } else {
            int p = 1;
            int num = n;
            while (num > 0) {
                int rem = num % 10;
                if (rem != 2 && rem != 3 && rem != 5 && rem != 7) {
                    p = 0;
                    break;
                }
                num /= 10;
            }
            if (p == 0) {
                printf("Primo\n");
            } else {
                printf("Super\n");
            }
        }
    }
    return 0;
}
