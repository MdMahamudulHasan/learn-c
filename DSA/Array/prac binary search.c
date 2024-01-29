#include<stdio.h>
int main(){
    int size,i,j,middle,left_pos,right_pos,num,found=0;
    printf("Enter the size of your numbers:");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the numbers: ");
    for (i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    int temp;
    for(i=0; i<size; i++){
        for(j=i+1; j<size; j++){
            if(arr[i] > arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(i=0; i<size; i++){
        printf("%d",arr[i]);
    }

    printf("Enter the number that you want search: ");
}
