#include <stdio.h>
//program to practice pointers and dereference
int main() {
    int num =55;
    int *pnum=&num;
    printf("The address of the pointer %p\n",pnum);
    printf("The address of the pointer %p\n",&pnum);
    printf("The address of the pointer %p\n",&num);
    printf("The value of the pointer %d\n",*pnum);
    printf("The value of what the pointer is pointing to %d\n",*pnum);

    int num2 =999;
    int *pnum2= &num2;
    num2+=25;
    printf("num2 %d\n",num2);
    *pnum2+=25;
    printf("num2 %d\n",*pnum2);
    printf("num2 %d\n",num2);

    int * pt;
    *pt=5;
    //printf("%d",*pt);
    int value =1000;
    int const *pvalue =&value;
    value =100;
    printf("%d\n",value);
   
}

