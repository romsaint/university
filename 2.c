#include <math.h>

int main(void) {
    unsigned long long k = 1e11;
    unsigned long days;
    unsigned char hours, minutes, seconds;
    days = k / 3600 / 24;
    hours = k / 3600 % 24;
    minutes = k % 3600 / 60;
    seconds = k % 60;
    char k2 = k / days / hours / minutes / seconds;
    k = days * 24 * 3600 + hours * 3600 + minutes * 60 + seconds;

    return 0;
}