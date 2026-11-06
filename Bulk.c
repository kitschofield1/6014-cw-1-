#define MAX_SIZE 30
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char who[12];
int size = MAX_SIZE;
char password[12];

int validfile(const char *person) {
    for (int i = 0; person[i] != '\0'; i++) {
      if (!((person[i] >= 'a' && person[i] <= 'z') ||
        (person[i] >= 'A' && person[i] <= 'Z') ||
        (person[i] >= '0' && person[i] <= '9') ||
        (person[i] == '_') ||
        (person[i] == '-') ||
        (person[i] == '.'))) {

          return 0;

      }
    }

    return 1;
}

void show_notes(unsigned int size) {

    char person[12];
    char command[size];

    printf("Whose notes: ");
    if (scanf("%11s", person) != 1) {
      return;
    }

    if (!validfile(person)) {
      return;
    }

    strcpy (command, "cat notes/");
    strcat (command, person);
    system (command);



}

int main() {

    printf("Username: ");
    scanf("%s", who);
    printf("Password: ");
    scanf("%s", password);

    if ((strcmp(who, "ian") == 0) && (strcmp(password, "iscool") == 0)) {
      show_notes(size);
    }

    else if ((strcmp(who, "george") == 0) && (strcmp(password, "iscooler") == 0)) {
            show_notes(size);
    }
    else {
      exit(0);
    }
    return 0;   
} //first proper commit
