#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    // Allocate memory for a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    
    // Assign data to the new node
    newNode->data = data;
    newNode->next = NULL; // Initially, the new node doesn't point to anything
    
    return newNode;
}

int main() {
    // Example usage
    int value = 10;
    struct Node* newNode = createNode(value);
    
    // Accessing node's data
    printf("Node created with data: %d\n", newNode->data);
    
    // Don't forget to free the allocated memory when you're done!
    free(newNode);
    
    return 0;
}
