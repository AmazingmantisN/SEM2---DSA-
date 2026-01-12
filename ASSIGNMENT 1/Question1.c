#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee person1, person2, person3;
    struct Employee winner;

    printf("Enter details for Employee 1 (ID, Name, Salary):\n");
    scanf("%d %s %f", &person1.id, person1.name, &person1.salary);

    printf("Enter details for Employee 2 (ID, Name, Salary):\n");
    scanf("%d %s %f", &person2.id, person2.name, &person2.salary);

    printf("Enter details for Employee 3 (ID, Name, Salary):\n");
    scanf("%d %s %f", &person3.id, person3.name, &person3.salary);

    winner = person1;

    if (person2.salary > winner.salary) {
        winner = person2;
    }

    if (person3.salary > winner.salary) {
        winner = person3;
    }

    printf("\n--- Result: Highest Paid Employee ---\n");
    printf("Employee ID   : %d\n", winner.id);
    printf("Employee Name : %s\n", winner.name);
    printf("Salary Amount : %.2f\n", winner.salary);

    return 0;
}