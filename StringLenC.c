#include <stdio.h>
//program to calculate length of string
int calcLength(const char *cpointer, const char string1) {
    int length;
    const char *cpointerEnd = &string1;
    while (cpointerEnd != '\0') {
        cpointerEnd++;
    }
    length = (&cpointerEnd - &cpointer);
    if (length >= 0){
        return length +1;
    }
    else {
        return (length * -1) + 1;
    }
}

int main() {
    const char string1 = "Hello";
    const char *cpointer = &string1;
    int end;
    end = calcLength(cpointer,string1);
    printf("%d",end);
    return 0;
}