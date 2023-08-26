#include <stdio.h>

int main() {
    float a = 25.321;

    //typecasting float pointer to unsigned long int.
    unsigned long int addrFloat = (unsigned long int) &a; //pointer is also 8 bytes

    printf("size of lu: %lu\n", sizeof(addrFloat));
    printf("Address of the variable 'a': %p\n", &a);
    printf("Address of float in unsigned long: %lu\n", addrFloat);
    return 0;
}