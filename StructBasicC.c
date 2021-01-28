#include <stdio.h>
struct Employee{
    char name[20];
    int hireDate;
    float salary;
};
int main() {
    struct Employee emp = {"Tehila",4/5/20,3.2211};

    printf("%s",emp.name);
    printf("\nEnter Name:");
    scanf("%s",emp.name);
    printf("%s",emp.name);

    return 0;
}
