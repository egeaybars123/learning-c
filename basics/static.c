#include <stdio.h>

//function prototype
void increment(void);

//we need a global variable that is private to a function.
//int count = 0;

int main() {
    increment();
    increment();
    increment();

    return 0;
}

void increment(void) {
    static int count = 0;
    count++;

    printf("Increment count: %d\n", count);
}