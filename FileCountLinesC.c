#include <stdio.h>
#include <stdlib.h>
//program to count number of lines in text file
int main() {
    FILE *fp=NULL;
    char c;
    int counter = 0;
    fp = fopen("text.txt", "r");
    if (fp == NULL) {
        printf("Error in opening file");
        return -1;
    }
    while((c = fgetc(fp)) != EOF)
    {
        if(c == '\n')
        {
            counter++;
        }
    }
    fclose(fp);
    fp = NULL;
    printf("\nLines:%d", counter+1);
    return 0;
}
