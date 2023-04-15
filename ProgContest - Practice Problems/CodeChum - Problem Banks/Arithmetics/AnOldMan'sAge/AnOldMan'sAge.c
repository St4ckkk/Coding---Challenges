#include <stdio.h>

int main() {
    int programmersAge, teachersAge, peterAge;

    printf("Enter age of The Programmer: ");
    scanf("%d", &programmersAge);
    printf("Enter age of his teacher: ");
    scanf("%d", &teachersAge);
    printf("Enter age of his friend, Peter: ");
    scanf("%d", &peterAge);

    int ageOfOldMan = (programmersAge + teachersAge) - peterAge;

    printf("The age of the old man is %d", ageOfOldMan);


    return 0;
}
