#include<stdio.h>
#include<stdlib.h>

// int main(){
//     int mynumbers[] ={15, 50, 75, 100};
//     printf("%d\n",mynumbers[0]);
    
//     mynumbers[0]=33;
//     printf("%d\n",mynumbers[0]);

//     int i;
//     for(i=0; i<4; i++){
//         printf("%d\n",mynumbers[i]);
//     }
// }


// int main(){
//     int mynumbers[4];

//     mynumbers[0] = 25;
//     mynumbers[1] = 55;
//     mynumbers[2] = 75;
//     mynumbers[3] = 85;

//     printf("%d",mynumbers[1]);
// }

// int main(){
//     int mynumbers[] = {10, 25, 50, 75, 100};

//     printf("%lu\n", sizeof(mynumbers));

//     int length = sizeof(mynumbers) / sizeof(mynumbers[0]);
//     printf("%d\n",length);

//     int i;
//     for(i=0; i<length; i++){
//         printf("%d\n",mynumbers[i]);
//     }
// }

// -----------------------------------------Real life Example----------------------------------

//--------- Calculate Average Age-------- 
// int main(){

//     // An array storing different ages
//     int ages[] = {20, 22, 18, 48, 26, 87, 70};

//     float avg, sum=0;
//     int i;

//     int length = sizeof(ages) / sizeof(ages[0]);

//     for ( i = 0; i < length; i++)
//     {
//         sum= sum + ages[i];
//     }
//     avg = sum / length;

//     printf("The average age is: %.2f", avg);
     
// }

//------------------Find lowest age in array-------


// int main(){
//     int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

//     int length = sizeof(ages) / sizeof(ages[0]);

//     int lowestage = ages[0];


//     for(int i=0; i<length; i++){
//         if (lowestage> ages[i]){
//             lowestage = ages[i];
//         }
        
//     }

//     printf("%d", lowestage);
// }

//----------------------------------2D- array---------------------------------
int main(){
    int matrix[2][3]={{1, 4, 2}, {3, 6, 8}};

    printf("%d\n", matrix[0][2]);
    printf("%d\n", matrix[1][2]);

    // Change value in 2D array
    matrix[0][0] = 9;
    printf("\n%d\n",matrix[0][0]);

    // Loop throuh 2D array
    int i,j;
    for(i=0; i<2; i++){
        for ( j = 0; j <3; j++){
            printf("%d\n",matrix[i][j]);
        }
        
    }
}
