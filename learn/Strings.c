#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// int main(){
//     char greetings[] = "Hello World!";
//     printf("%s\n",greetings);

//     printf("%s", greetings[0]);

//     greetings[0]='j';
//     printf("\n%s",greetings);
// }

// int main(){
//     char carName[] = "Volvo";
//     int i;
//     int length = sizeof(carName) / sizeof(carName[0]);

//     for(i=0; i<length; i++){
//         printf("%c\n",carName[i]);
//     }
// }

//------------------------------------------Real life Example-----------------------------------
// int main(){
//     char massage[] = "Good to see you.";
//     char fname[] = "john";

//     printf("%s %s!",massage,fname);
// }

//--------------------------------------------------String Function----------------------------------------
// int main(){
//     char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVXYZ";
//     printf("%d\n", strlen(alphabet));
//     printf("%d", sizeof(alphabet));
// }

//----------------------------------------------------------Concatenate String-----------------------------------
// int main(){
//     char str1[20] = "Hello ";
//     char str2[] = "World!";
//     char str3[20];

//     strcat(str1, str2);
//     printf("%s\n", str1);

//     strcpy(str3, str1);
//     printf("%s", str3);
// }

//---------------------------------------------------Compare String-------------------------------------------
// int main(){
//     char str1[] = "Hello";
//     char str2[] = "Hello";
//     char str3[] = "Hi";

//     // Compare str1 and str2, and print the result
//     printf("%d\n", strcmp(str1, str2));  // Returns 0 (the strings are equal)

//     // Compare str1 and str3, and print the result
//     printf("%d\n", strcmp(str1, str3));  // Returns -4 (the strings are not equal)
// }

// ---------------------------------------Best collect input system for string----------------------------------------------

int main(){
    char fullName[30];

    printf("Type your full name:  \n");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Hello %s", fullName);
}