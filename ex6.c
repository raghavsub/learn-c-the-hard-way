#include <stdio.h>

/* variable types */

int main(int argc, char *argv[])
{
    int distance = 100;
    float power = 2.345f;
    double super_power = 56789.4532;
    char initial = 'A';
    char first_name[] = "Rag";
    char last_name[] = "Sub";

    printf("I have %d miles left to go!\n", distance);
    printf("I have %f power levels.\n", power);
    printf("I have %f superpowers. That's right.\n", super_power);
    printf("My initial is %c.\n", initial);
    printf("My first name is %s.\n", first_name);
    printf("My last name is %s.\n", last_name);
    printf("My name is %s %c %s. Muahaha.\n",
    first_name, initial, initial);

    return 0;
}
