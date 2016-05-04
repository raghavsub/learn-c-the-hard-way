#include <stdio.h>

/* while loops and booleans */

int main(int argc, char *argv[])
{
    // iterate through argv
    int i = 0;
    while(i < argc) {
        printf("arg %d: %s\n", i, argv[i]);
        i++;
    }

    // create states
    char *states[] = {
        "California", "Washington", "Oregon", "Michigan"
    };
    int num_states = 4;

    // copy the contents of argv into states
    i = 0;
    while(i < argc && i < num_states) {
        states[i] = argv[i];
        i++;
    }

    // iterate through states
    i = num_states - 1; // reinitialize i
    while(i > -1) {
        printf("state %d: %s\n", i, states[i]);
        i--;
    }

    return 0;
}
