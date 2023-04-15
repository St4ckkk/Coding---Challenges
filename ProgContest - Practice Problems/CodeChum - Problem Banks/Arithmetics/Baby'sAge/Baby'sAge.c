#include <stdio.h>

int main() {

    int programmerAge, teacherAge, peterAge;

    printf("Enter age of the Programmer: ");
    scanf("%d", &programmerAge);
    printf("Enter age of his teacher: ");
    scanf("%d", &teacherAge);
    printf("Enter age of his friend, Peter: ");
    scanf("%d", &peterAge);

    int product = programmerAge * teacherAge;
    int babyAge = product / peterAge + 1;

    printf("Baby's age = %d", babyAge);

    return 0;
}
