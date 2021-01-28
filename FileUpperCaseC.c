#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//program to convert file characters to uppercase
int main() {
    FILE *fp=NULL;
    FILE *fp2 =NULL;
    char c;
    fp = fopen("text.txt", "r");
    fp2 =fopen("output.txt","w");
    if (fp == NULL) {
        printf("Error in opening file");
        return -1;
    }
    while((c = fgetc(fp)) != EOF)
    {
        fputc(toupper(c),fp2);
    }
    fclose(fp);
    fp = NULL;
    fclose(fp2);
    fp2 = NULL;
    return 0;
}
