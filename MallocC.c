#include <stdio.h>
#include <stdlib.h>
//program to practice using malloc & free
int main() {
    char *str = NULL;
    int size = 0;
    printf("Enter a string size:");
    scanf("%d", &size);
    str = (char *) malloc(size * sizeof(char));
    if (str != NULL) {
        printf("Enter a string:");
        scanf("%s", &str);

    }
    if(sizeof(str) !=size){
        printf("Size doesnt match string input!");
    }
    free(str);
    return 0;
}
