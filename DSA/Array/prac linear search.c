#include<stdio.h>
int main(){
    int size,i,num,pos,found=0;
    printf("Enter the amount of numbers: ");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter the numbers: ");
    for(i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the number that you want to search:");
    scanf("%d",&num);

    for(i=0; i<size; i++){
        if(arr[i]==num){
            found=found+1;
            pos=i;
            printf("\n%d This number found in your given list and the position is %d",num,i+1);

        }
    }
    if(found==0){
        printf("\n%d This number not in your given list",num);
    }
    return 0;
}
