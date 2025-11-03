//name: lawrence odanga
//adm no: bcs-03-0052/2025
#include <stdio.h>

int main() {
    float radius, area, perimeter;
    float pi=3.142;
    printf("Enter radius: ");
    scanf("%f", &radius);

    area = pi * radius * radius;
    perimeter = 2 * pi * radius;
    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}
