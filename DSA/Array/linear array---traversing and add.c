#include <stdio.h>
#define MAX_SIZE 100
void insertElement(int array[], int size, int element, int position) {

    // Check if position is valid
    if (position < 0 || position > size) {
        printf("Invalid position\n");
        return;
    }

    // Shift elements to the right to make space for the new element
    for (int i = size; i > position; i--) {
        array[i] = array[i - 1];
    }

    // Insert the element at the specified position
    array[position] = element;

    // Increase the size of the array
    (size)++;
}

int main() {
    int myArray[MAX_SIZE] = {1, 2, 3, 4, 5};
    int size = 5; // Current size of the array
    int newElement = 10;
    int insertPosition = 2;

    // Insert the new element into the array
    insertElement(myArray, size, newElement, insertPosition);

    // Print the modified array
    printf("Modified array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    return 0;
}

