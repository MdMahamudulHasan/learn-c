#include<stdio.h>
#include<stdlib.h>
int main(){
    char greetings[] = "Hello World!";
    printf("%s\n",greetings);

    printf("%s", greetings[0]);

    greetings[0]='j';
    printf("\n%s",greetings);

}