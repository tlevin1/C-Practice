#include <stdio.h>
//program to practice pointers in C
int main() {
  int number =0;
  int *pnumber =NULL;
  number =10;
  printf("number's address %p\n",&number);
  printf("number value %d\n",number);
  pnumber = &number;
  printf("pnumbers address %p\n",*pnumber);
  printf("pointers size %zd\n",sizeof(pnumber));
  printf("pnumber value: %d\n",*pnumber);
  printf("pnum value %p\n",pnumber);
}
