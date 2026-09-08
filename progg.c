#define _USE_MATH_DEFINES // Чтоьы использовать M_PI в math.h, нужно определить этот макрос перед подключением библиотеки

#include <stdio.h>
#include <math.h> // Подключаем математическую библиотеку для M_PI и pow()

int main(void) {
    double radius = 10.0;

    double pi = M_PI;
    double circumference = 2.0 * pi * radius;
    double circle_area = pi * pow(radius, 2.0);
    double sphere_area = 4.0 * pi * pow(radius, 2.0);
    double sphere_volume = (4.0 / 3.0) * pi * pow(radius, 3.0);

    printf("Для радиуса r = %.2f:\n", radius);
    printf("1. Длина окружности:         %.4f\n", circumference);
    printf("2. Площадь круга:            %.4f\n", circle_area);
    printf("3. Площадь поверхности сферы: %.4f\n", sphere_area);
    printf("4. Объём шара:              %.4f\n", sphere_volume);

    return 0;
}