#include <stdio.h>

int main() {
    int numbers[5] = {25, 12, 7, 45, 19};
    int n = 5;
    
    int *location = numbers;
    
    int max = *location;
    int min = *location;

    for (int i = 0; i < n; i++) {
        int currentValue = *(location + i);

        if (currentValue > max) {
            max = currentValue;
        }

        if (currentValue < min) {
            min = currentValue;
        }
    }

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}