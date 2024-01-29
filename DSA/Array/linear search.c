#include <stdio.h>

int main() {
    int size, num, i, found = 0, pos = -1;

    // Input: Number of elements in the array
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input: Array elements
    printf("\nEnter the elements: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input: Number to be searched
    printf("\nEnter the number that has to be searched: ");
    scanf("%d", &num);

    // Linear search to find the number in the array
    for (i = 0; i < size; i++) {
        if (arr[i] == num) {
            found = 1;
            pos = i;
            printf("\n%d is found in the array at position = %d", num, i + 1);
            break;
        }
    }

    // Output: Display whether the number was found or not
    if (found == 0) {
        printf("\n%d does not exist in the array", num);
    }

    return 0;
}

