#include <stdio.h>

int main()
{
    // Signed data types
    signed char a = -10;
    signed int b = -100;
    signed short int c = -200;
    signed long int d = -30000;

    // Unsigned data types
    unsigned char e = 250;
    unsigned int f = 100;
    unsigned short int g = 500;
    unsigned long int h = 30000;

    // Other primary data types
    float i = 3.14f;
    double j = 25.6789;

    printf("Signed char: %hhd\n", a);
    printf("Signed int: %d\n", b);
    printf("Signed short int: %hd\n", c);
    printf("Signed long int: %ld\n", d);

    printf("Unsigned char: %hhu\n", e);
    printf("Unsigned int: %u\n", f);
    printf("Unsigned short int: %hu\n", g);
    printf("Unsigned long int: %lu\n", h);

    printf("Float: %f\n", i);
    printf("Double: %f\n", j);

    return 0;
}
