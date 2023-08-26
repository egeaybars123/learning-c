#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

#define PINNO(pin) (pin & 255)

int main() {
    //* (volatile uint32_t *) (0x40020000 + 0) &= ~(3 << 6); 
    //* (volatile uint32_t *) (0x40020000 + 0) = (3 << 6);

    unsigned int i = ~(3 << 6); // inverted
    
    //unsigned int i = (3 << 6);

    //i = i << 2;

    //printf("0b%d", *i);

    printf("%d \n", i);
    printf("%d", PINNO(3));
    
    return 0;
}