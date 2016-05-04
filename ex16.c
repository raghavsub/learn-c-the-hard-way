#include <stdio.h> // for printf
#include <assert.h> // for assert
#include <stdlib.h> // for malloc and free
#include <string.h> // for strdup

/* structs */

struct Person
{
    char *name; // string param
    int age; // param
    int height; // param
    int weight; // param
};

/* creates a new struct Person */
struct Person *Person_create(char *name, int age, int height, int weight)
{
    struct Person *who = malloc(sizeof(struct Person)); // allocate memory for the struct
    assert(who != NULL); // make sure actual memory is allocated

    who->name = strdup(name); // hard copy name, use -> to refer to struct fields
    who->age = age; // set age
    who->height = height; // set height
    who->weight = weight; // set weight

    return who; // create struct
}

/* EC */
/*
struct Person Person_create(char *name, int age, int height, int weight)
{
    struct Person who;

    who.name = strdup(name);
    who.age = age;
    who.height = height;
    who.weight = weight;

    return who;
}
*/


/* destroys a struct Person */
void Person_destroy(struct Person *who)
{
    assert(who != NULL); // make sure actual memory is being freed

    free(who->name); // free the string from memory
    free(who); // free the struct from memory
}

/* EC */
/*
void Person_destroy(struct Person who)
{
    free(who.name);
}
*/


/* prints a struct Person's info */
void Person_print(struct Person *who)
{
    printf("Name: %s\n", who->name); // print
    printf("\tAge: %d\n", who->age); // print
    printf("\tHeight: %d\n", who->height); // print
    printf("\tWeight: %d\n", who->weight); // print
}

/* EC */
/*
void Person_print(struct Person who)
{
    printf("Name: %s\n", who.name);
    printf("\tAge: %d\n", who.age);
    printf("\tHeight: %d\n", who.height);
    printf("\tWeight: %d\n", who.weight);
}
*/

/* main */
int main(int argc, char *argv[])
{
    struct Person *shela = Person_create("Shela W.", 19, 64, 115); // create Person struct shela
    struct Person *raghav = Person_create("Raghav S.", 20, 65, 125); // create Person struct raghav

    printf("Shela is at memory location %p:\n", shela); // shela is a pointer, print memory location 
    Person_print(shela); // call Person_print
    printf("Raghav is at memory location %p:\n", raghav); // raghav is a pointer, print memory location
    Person_print(raghav); // call Person_print

    shela->age += 10; // increment age
    Person_print(shela); // call Person_print
    raghav->age += 10; // increment age
    raghav->height += 1; // increment height
    raghav->weight += 25; // increment weight
    Person_print(raghav); // call Person_print

    //Person_destroy(shela); // destroy Person struct shela
    //Person_destroy(raghav); // destroy Person struct raghav

    return 0; // end program

    /* EC */
    /*
    struct Person shela = Person_create("Shela W.", 19, 64, 115);
    struct Person raghav = Person_create("Raghav S.", 20, 65, 125);

    printf("Shela is at memory location %p:\n", &shela);
    Person_print(shela);
    printf("Raghav is at memory location %p:\n", &raghav);
    Person_print(raghav);

    shela.age += 10;
    Person_print(shela);
    raghav.age += 10;
    raghav.height += 1;
    raghav.weight += 25;
    Person_print(raghav);

    Person_destroy(shela);
    Person_destroy(raghav);

    return 0;
    */
}
