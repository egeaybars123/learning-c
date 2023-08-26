#include <stdio.h>
#include <string.h>

int main() {

    char name [25];
    int salary;

    printf("\nWhat is your name?\n");
    fgets(name, 25, stdin); //Do not use scanf for white spaces.
    name[strlen(name)-1] = '\0';
    printf("Hello %s, wasssupppp! \n", name);
    

    printf("\nHow much salary (₺) do you earn?\n");
    scanf("%d", &salary);

    printf("You earn ₺%d a month.", salary);

    return 0;
}