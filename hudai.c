#include <stdio.h>
int main() {
    long double number = 2;
    while (1) {
        long double result = number * number;
        printf("%.0Lf\n", result);
        number = result;
    }
    return 0;
}

