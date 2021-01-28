#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main() {
    FILE *fp=NULL;
    char c;
    int count = 0;
    int i = 0;
    fp = fopen("text.txt", "r");
    if (fp == NULL) {
        printf("Error in opening file");
        return -1;
    }
    fseek(fp,0,SEEK_END);
    count = ftell(fp);
    while(i < count) {
        i++;
        fseek(fp,-i,SEEK_END);
        printf("%c", fgetc(fp));
    }
    fclose(fp);
    fp = NULL;
    return 0;
}
