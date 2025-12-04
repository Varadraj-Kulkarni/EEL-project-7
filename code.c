#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void register1() {
    char name[100], pass[100];
    FILE *f;

    f = fopen("info.txt", "a");
    if (f == NULL) {
        printf("Could not open file!\n");
        return;
    }

    printf("Username: ");
    scanf("%s", name);
    fprintf(f, "%s\n", name);

    printf("Password: ");
    scanf("%s", pass);
    fprintf(f, "%s\n", pass);

    fclose(f);
}

int main() {
    int choice;
    char name[100], pass[100];
    char file_user[100], file_pass[100];
    int found;

    while (true) {
        printf("\n1. Login\n");
        printf("2. Register\n");
        printf("3. Exit\n");
        scanf("%d", &choice);

        if (choice == 1) {
            FILE *f = fopen("info.txt", "r");
            if (f == NULL) {
                printf("No users registered yet.\n");
                continue;
            }

            found = 0;

            printf("Enter username: ");
            scanf("%s", name);
            printf("Enter password: ");
            scanf("%s", pass);

            while (fscanf(f, "%s", file_user) == 1 &&
                   fscanf(f, "%s", file_pass) == 1) {

                if (strcmp(name, file_user) == 0 &&
                    strcmp(pass, file_pass) == 0) {
                    found = 1;
                    break;
                }
            }

            fclose(f);

            if (found == 1) {
                printf("Login successful!\n");
                break;
            } else {
                printf("Login failed.\n");
            }
        }

        else if (choice == 2) {
            register1();
            printf("Registered.\n");
        }

        else if (choice == 3) {
            return 0;
        }

        else {
            printf("Invalid choice.\n");
        }
    }

    printf("Welcome, %s!\n", name);

    return 0;
}
