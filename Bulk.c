#define MAX_SIZE 30
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char who[12];
int size = MAX_SIZE;
char password[12];

void show_notes(unsigned int size) {

    char person[12];
    char command[size];

    printf("Whose notes: ");
    scanf("%s", person);

    strcpy (command, "cat notes/");
    strcat (command, person);
    system (command);



}

int main() {

    printf("Username: ");
    scanf("%s", who);
    printf("Password: ");
    scanf("%s", password);

    if ((strcmp(who, "ian") == 0) && (strcmp(password, "iscool") != 0))
        exit(0);

    else {
        if ((strcmp(who, "george") == 0) && (strcmp(password, "iscooler") ==0))
            show_notes(size);
        else 
            show_notes(size);
    }
    
    return 0;   
} //first proper commit
