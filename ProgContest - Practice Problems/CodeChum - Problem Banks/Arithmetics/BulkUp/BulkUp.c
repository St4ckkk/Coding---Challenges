#include <stdio.h>

int main() {
    int n, weights[3];
    printf("Enter the maximum capacity: ");
    scanf("%d", &n);
    printf("Enter the three weights: ");
    scanf("%d %d %d", &weights[0], &weights[1], &weights[2]);

    int maxWeightLifted = 0;
    int maxWeights[2] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = i+1; j < 3; j++) {
            int weightSum = weights[i] + weights[j];
            if (weightSum <= n && weightSum > maxWeightLifted) {
                maxWeightLifted = weightSum;
                maxWeights[0] = weights[i];
                maxWeights[1] = weights[j];
            }
        }
    }
    printf("The two weights are %d and %d.\n", maxWeights[0], maxWeights[1]);
    return 0;
}
