#include <stdio.h>

//program to concat two strings
int count(char array[]) {
    int counter = 0;
    for (int i = 0; i < sizeof(array); i++) {
        if (array[i] == NULL) {
            break;
        }
        counter++;
    }
    return counter;
}

void concat(char result[], char string1[], char string2[]) {
    int size = 12;
    // int size = count(string1) + count(string2);
    //printf("\n%d",size);
    printf("\nString 1:%s", string1);
    printf("\nString 2:%s", string2);
    int i;
    for (i = 0; i < 12; i++) {
        if (i >= 6) {
            result[i] = string2[i - 6];
        } else {
            result[i] = string1[i];
        }
    }

}

int main() {
    char arr[] = {'c', 'd', 'e', 'f'};
    int size;
    size = count(arr);
    printf("Size:");
    printf("%d", size);

    char res[] = {};
    char str1[] = "abcdef";
    char str2[] = "ghijkl";
    concat(res, str1, str2);
    printf("\n%s", res);
    return 0;
}


