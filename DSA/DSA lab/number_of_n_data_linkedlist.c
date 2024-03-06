#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

void TraverseLinkedlist(struct node *head){
    struct node *ptr = head;
    printf("Linked list:");
    while(ptr!=NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

int main(){
    int n, data;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    struct node*head = NULL;
    struct node*prev = NULL;

    for (int i = 0; i<n; i++){
        printf("Enter data %d:", i+1);
        scanf("%d",&data);

        struct node *newNode = (struct node*)malloc(sizeof(struct node));
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

    TraverseLinkedlist(head);
    return 0;
}