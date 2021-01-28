#include <stdio.h>
//program to square a number
int square(int *ptr){
    int sum =0;
    sum = *ptr * *ptr;
    return sum;
}
int main() {
    int num = 25;
    int *number = &num;
    int square;
    square = square(number);
    printf("%d", square);
    return 0;
}

