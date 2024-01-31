#include<stdio.h>
//----------------------------------------while loop---------------------------------
// int main(){
//     /* while(codition){
//         code to be excuted
//     }
//     */

//    int i = 0;
   
//    while (i<5){
//     printf("%d\n", i);
//     i++;
//    }
   
// }

//--------------------------------While loop Real life Example----------------------------
// int main(){
//     int countdown = 3;

//     while (countdown > 0){
//         printf("%d\n",countdown);
//         countdown--;
//     }

//     printf("Happy New Year");

//     return 0;
// }


// int main(){
//     int dice = 1;

//     while(dice <=6){
//         if(dice<6){
//             printf("No Yatzy\n");
//         }
//         else{
//             printf("Yatzy!");
//         }
//         dice = dice + 1;
//     }
//     return 0;
// }

// int main(){
//     int i;
//     for (i = 0; i < 5; i++){
//         printf("%d\n",i);
//     }

//     return 0;
    
// }

//---------------------------------------Nested loop---------------------------

// int main(){
//     int i,j;

//     //outer loop
//     for ( i = 1; i <=2; i++){
//         printf("Outer: %d\n",i);

//         //Outer loop
//         for ( j = 1; j <= 3; j++){
//             printf("Inner: %d\n",j);
//         }
        
//     }
//     return 0;
    
// }

//-----------------------------------------Real life Example---------------------------
int main(){
    int number = 2;
    int i;

    //Print the multiplication table for the number 2
    for ( i = 1; i <=10; i++){
        printf("\n%d x %d = %d", number,i,number*i);
    }

    return 0;
    
}