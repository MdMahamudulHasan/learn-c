#include<stdio.h>
int main(){
    int size,i,num,middle;
    printf("Enter the size of your numbers:");
    scanf("%d",&size);

    int arr[size];
    printf("\nEnter the numbers:");
    for(i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    int j,temp;
    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
           if(arr[i] > arr[j]) {
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
        }
    }
    for(i=0; i<size; i++){
        printf("%d",arr[i]);
    }

    printf("\nEnter the number that you want to search:");
    scanf("%d",&num);


    int left_pos,right_pos,found=0;
    left_pos=0;
    right_pos=size-1;

    while(left_pos<=right_pos){
        middle=(left_pos+right_pos)/2;
        if(arr[middle]==num){
            found=+1;
            printf("%dThis number found in position %d",num,middle+1);
            break;
        }
        else if (arr[middle]<num){
            left_pos=middle+1;
        }
        else
            right_pos=middle-1;
    }
    if(found==0){
        printf("\nWarning! '%d' this number is not here.",num);
    }
    return 0;
}
