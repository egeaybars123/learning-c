#include <stdio.h>

void crypto(char coin[]) {
    printf("I have 1000 USD worth of %s", coin);
}

unsigned int value(unsigned int amount) {
    double value = amount * 30000;
    return value;
}

int main() {
    //crypto("LINK");
    unsigned int bitcoin = value(30);
    printf("You own %d USD worth of bitcoin", bitcoin);
    return 0;
}