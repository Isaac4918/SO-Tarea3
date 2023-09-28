#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

void meeseeks(){
    char request[100];
    printf("I'm Mr Meeseeks! Look at me!\n");
    printf("What is your request?:n\n");
    fgets(request, sizeof(request), stdin);
    printf("\n");
    printf("Oooh yeah! Can do!\n");

}


int main() {

    char option[100];

    while (1)
    {
        printf("====================================\n");
        printf("             Meeseeks Box\n");
        printf("====================================\n\n");
        printf("1) Press Button\n");
        printf("2) Exit\n\n");
        printf("Select an option: ");
        fgets(option, sizeof(option), stdin);
        printf("\n");

        if(option[0] == '1'){
            meeseeks();
        }else if(option[0] == '2'){
            printf("Bye!\n");
            break;
        }
    }

    return 0;
}
