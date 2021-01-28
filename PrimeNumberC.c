#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//program to print prime numbers from 1-100
int main() {
    int array[100] = {2, 3};
    bool prime = true;
    int i;
    int j;
    int counter = 0;
        for (i = 2; i <= 100; i++) {
            prime = true;
            for (j = i-1; j > 1; j--) {
                if (i % j == 0) {
                    prime = false;
                    break;
                } else {
                    continue;
                }
            }
            if (prime == true) {
                array[counter] = i;
                printf(" %d ", array[counter]);
                counter++;
            }
        }
    return 0;
}
