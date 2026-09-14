#include <stdio.h>
#include <limits.h>
#include <math.h>

int main(void) {
    unsigned long long total_grains = ULLONG_MAX;

    unsigned int annual_yield_tons = 70000000;
    unsigned int grams_per_ton = 1000000;
    unsigned char grains_per_gram = 10;

    unsigned long long grains_per_year = (unsigned long long)annual_yield_tons * grams_per_ton * grains_per_gram;

    double years = (double)total_grains / grains_per_year;

    printf("%.0f", ceil(years));

    return 0;
}