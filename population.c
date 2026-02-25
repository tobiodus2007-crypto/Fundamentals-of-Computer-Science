#include <stdio.h>

int main(void) {
    int initial = 2000;
    double rate = 0.15; /* 15% */

    double increase_6mo = initial * rate;
    double increase_year = increase_6mo * 2;

    printf("Increase every 6 months = %.0f people\n", increase_6mo);
    printf("Increase in a year = %.0f people\n", increase_year);

    return 0;
}
