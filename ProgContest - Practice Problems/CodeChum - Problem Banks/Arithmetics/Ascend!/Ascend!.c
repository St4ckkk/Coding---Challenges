#include <stdio.h>
#include <stdlib.h>
#define MAX_ARR 100
int main()
{
    int arr[MAX_ARR];
    int n, sum=0;

    printf("Enter the size: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("Enter element #%d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int current_sum = arr[0];
    for(int i = 0; i < n-1; i++) {
    if(arr[i] < arr[i+1]) {
        current_sum += arr[i+1];
    }else{
        if (current_sum > sum) {
            sum = current_sum;
        }
    current_sum = arr[i+1];
    }
}
    if (current_sum > sum) {
        sum = current_sum;
    }

    printf("Largest number = %d", sum);

    return 0;
}
