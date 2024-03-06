#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void traverselinkedlist(struct node* head){
    struct node* current = head;

    printf("Linked list:\n");
    while(current != NULL){
        printf("Element: %d\n", current->data);
        current = current->next;
    }
    mainMenu(head);
}

void insertinbegining(struct node** head, int newData){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;
    printf("Insert data successfully\n");
    mainMenu(*head);
}

void insertinend(struct node** head, int newData){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = newData;
    newNode->next = NULL;

    if(*head == NULL){
        *head = newNode;
        printf("Insert data successfully\n");
        mainMenu(*head);
        return;
    }

    struct node* ptr = *head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = newNode;
    printf("Insert data successfully\n");
    mainMenu(*head);
}

void insertAfteragivvenNode(struct node* head, int newData, int x){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = newData;

    struct node* ptr = head;
    while(ptr != NULL && ptr->data != x){
        ptr = ptr->next;
    }
    if(ptr == NULL){
        printf("Given node not found\n");
        mainMenu(head);
        return;
    }
    newNode->next = ptr->next;
    ptr->next = newNode;

    printf("Insert element successfully\n");
    mainMenu(head);
}

void mainMenu(struct node* head){
    printf("Enter the number that you want\n");
    printf("1. Linked list traverse\n");
    printf("2. Insert node in the beginning\n");
    printf("3. Insert node in the end\n");
    printf("4. Insert node after a given node\n");

    int menuNumber;
    scanf("%d", &menuNumber);

    switch(menuNumber){
        case 1:
            traverselinkedlist(head);
            break;
        case 2:
            printf("Enter data to insert: ");
            int newData;
            scanf("%d", &newData);
            insertinbegining(&head, newData);
            break;
        case 3:
            printf("Enter data to insert: ");
            scanf("%d", &newData);
            insertinend(&head, newData);
            break;
        case 4:
            printf("Enter data to insert after: ");
            int afterData;
            scanf("%d", &afterData);
            printf("Enter data to insert: ");
            scanf("%d", &newData);
            insertAfteragivvenNode(head, newData, afterData);
            break;
        default:
            printf("Invalid choice\n");
            mainMenu(head);
            break;
    }
}

int main(){
    int n, data;

    printf("Enter number of elements:");
    scanf("%d", &n);

    struct node* head = NULL;
    struct node* prev = NULL;

    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &data);

        struct node* newNode = (struct node*)malloc(sizeof(struct node));
        newNode->data = data;
        newNode->next = NULL;

        if(head == NULL){
            head = newNode;
        }
        else{
            prev->next = newNode;
        }
        prev = newNode;
    }

    printf("Linked list updated successfully\n");
    mainMenu(head);

    return 0;
}
