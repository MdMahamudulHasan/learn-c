#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//-------------------------------------------------Memory Address-------------------------------------------------------
// int main(){
//     int myAge = 43;

//     printf("%p", &myAge);
// }

//----------------------------------------------------Creating Pointers-----------------------------------------------
// int main(){
//     int myAge = 43;

//     printf("%d\n", myAge);
//     printf("%p", &myAge);
// }

// int main(){
//     int myAge = 43;
//     int* ptr = &myAge;

//     printf("%d\n", myAge);
//     printf("%p\n", &myAge);
//     printf("%p", ptr);

// }

// int main(){
//     int myAge = 43;
//     int* ptr = &myAge;

//     printf("%p\n",ptr);
//     printf("%d",*ptr);
// }

//------------------------------------------Pointer and Array--------------------------------------------
// int main(){
//     int mynumbers[4] = {25, 50, 75, 100};
//     int i;

//     for(i=0; i<4; i++){
//         printf("%d\n", mynumbers[i]);
//     }

//     for ( i = 0; i < 4; i++){
//         printf("%p\n", &mynumbers[i]);
//     }
//     for(i=0; i<4; i++){
//         printf("%d %p\n",mynumbers[i], &mynumbers[i]);
//     }
// }

// int main(){
//     int mynumbers[4] = {25, 50, 75, 100};

//     printf("%p\n", mynumbers);
//     printf("%p\n", &mynumbers[0]);

//     printf("%d\n", *mynumbers);
//     printf("%d\n", *(mynumbers+1));
//     printf("%d\n", *(mynumbers+2));
// }


int main(){
    int mynumbers[4] = {25, 50, 75, 100};
    int* ptr = mynumbers;
    int i;

    for ( i = 0; i < 4; i++){
        printf("%d\n", *(ptr +i));
    }
    
}