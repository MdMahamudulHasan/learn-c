#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
;
};

void linkedlistTraverse(struct node*ptr){
    while (ptr!=NULL){
        printf("Elements: %d\n", ptr->data);
        ptr = ptr->next;
    }
    
}

int main(){
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));

    head->data = 20;
    head->next = second;

    second->data = 30;
    second->next = third;

    third->data = 50;
    third->next = fourth;

    fourth->data = 25;
    fourth->next = NULL;

    linkedlistTraverse(head);

    return 0;
}


