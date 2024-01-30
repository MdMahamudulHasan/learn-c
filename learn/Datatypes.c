#include<stdio.h>
//-----------------------C The sizeof Operator--------------------------
// int main(){
//     int myInt;
//     float myFloat;
//     double myDouble;
//     char myChar;

//     printf("%lu\n", sizeof(myInt));
//     printf("%lu\n", sizeof(myFloat));
//     printf("%lu\n", sizeof(myDouble));
//     printf("%lu\n", sizeof(myChar));

// }

//-------------------Real life Example------------------------
// int main (){
//     // Create variables of different data types
//     int items = 50;
//     float cost_per_item = 9.99;
//     float total_cost = items * cost_per_item;
//     char currency = '$';

//     // Print variables
//     printf("Number of items: %d\n",items);
//     printf("Cost per item: %.2f%c\n",cost_per_item,currency);
//     printf("Total cost = %.2f%c",total_cost,currency);

//     return 0;
// }

//----------------------Type conversion------------------------------
// int main(){
//     // Set the maximum possible score in the game to 500
//     int maxScore = 500;
    
//     // The actual score of user
//     int userScore = 420;

//     /*Calculate the percenatge of the user's score in relation to the maximum available score.
//     Convert userScore to float to make sure that the devision is accurate*/
//     float percenatge = (float)userScore / maxScore * 100.0;

//     // Print the percentage
//     printf("Users a percentage $%2f",percenatge);

//     return 0;
// }

//------------------------------Conatant variable declareation---------------------------
// int main(){
//     const int birthyear = 1980;
//     birthyear = 2020;
//     //------------------------------Conatant variables can't change------------------------------
// }