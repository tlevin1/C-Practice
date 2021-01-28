#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    time_t t;
    srand((unsigned)time(&t));
    int random = rand() % 20;
    int i = 0;
    bool evan = false;
    while (i < 5) {
        printf("%s", "\nGuess the random number 0-20:");
        int input=0;
        scanf("%d", &input);
        printf("\nThe random number is: ");
        printf("%d", random);
        while (input <= 20 && input >= 0) {
            if (input == random) {
                printf("\n you got it ");
                evan = true;
                break;
            }
            if (input > random) {
                printf("\n Too high ");
                i = i + 1;
                break;
            }
            else if (input < random) {
                printf("\n Too low ");
                i = i + 1;
                break;
            }
        }
        if(evan == true){
            break;
        }
    }
    if (i == 5) {
        printf("you lose!");
    }
    return 0;
}
