#include<stdio.h>
//--------------Even Numbers count--------------
/*
int main(){
    int even = 0;
    int i = 0;
    int size;

    printf("Enter the size of your numbers:");
    scanf("%d",&size);


    int arr[size];
    printf("Enter your numbers: ");
    for(i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    for (i=0; i<size; i++){
        if(arr[i]%2==0){
        even = even + 1;
        }
    }

    printf("%d",even);

    return 0;
}
*/
//----------------Automobile example--------------------

int main(){
    int num = 0;
    int start_year,end_year,difference_of_year, size,i;

    printf("Enter the starting year: ");
    scanf("%d",&start_year);

    printf("Enter the last year: ");
    scanf("%d",&end_year);

    difference_of_year = end_year-start_year;
    size = difference_of_year;

    int arr[size];
    printf("Enter the numbers of sold automobiles: ");
    for(i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    for(i=0; i<size; i++){
        if(arr[i]>300){
            num= num+1;
        }
    }

    printf("%d",num);
    return 0;
}
