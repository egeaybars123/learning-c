#include <stdio.h>
#include "file1.c"

int mainPrivate = 0;

void increment(void);
void test(void);

int main() {

    increment();
    printf("Increment count: %d\n", mainPrivate);
    test();
    printf("Increment count: %d\n", mainPrivate);

    return 0;
}

void increment(void) {
    mainPrivate++;
}