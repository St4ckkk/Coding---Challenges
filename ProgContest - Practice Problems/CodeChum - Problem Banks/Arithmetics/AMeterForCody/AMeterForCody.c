#include <stdio.h>
#include <stdlib.h>
#define ft 0.305
int main()
{
    float n;
    printf("Enter measurement in feet: ");
    scanf("%f", &n);

    float result = n * ft;
    printf("Equivalent meters = %.2f", result);
    return 0;
}
