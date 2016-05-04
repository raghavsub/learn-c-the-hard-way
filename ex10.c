#include <stdio.h>

/* string arrays and for loops */

int main(int argc, char *argv[])
{
    int i;

    // iterate through args
    for (i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv [i]);
    }

    // make an array and iterate
    char *states[] = {
        "California", "Oregon", "Washington", "Michigan"
    };
    int num_states = 4;
    for (i = 0; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }

    return 0;
}
