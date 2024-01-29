#include <stdio.h>

#define MAX_SIZE 100

void deleteElement(int array[], int size, int position) {
    // Check if position is valid
    if (position < 0 || position >= size) {
        printf("Invalid position\n");
        return;
    }

    // Shift elements to the left to fill the gap created by deletion
    for (int i = position; i < size - 1; i++) {
        array[i] = array[i + 1];
    }

    // Decrease the size of the array
    (size)--;
}

int main() {
    int myArray[MAX_SIZE] = {1, 2, 3, 4, 5};
    int size = 5; // Current size of the array
    int deletePosition = 2;

    // Delete the element at the specified position
    deleteElement(myArray, size, deletePosition);

    // Print the modified array
    printf("Modified array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    return 0;
}

