#include <stdio.h> // Necessary for printf()
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    // Generate a random int from 0 to 10, inclusive
    int myrand = rand() % (10 + 1);

    if (myrand <= 4) {
        printf("Eat more beef, kick less cats\n");
    } else if (myrand <= 9) {
        printf("FRODO LIVES\n");
    } else {
        printf("Larn is the best roguelike\n");
    }
    
    printf("The random number was: %d\n", myrand);
}
