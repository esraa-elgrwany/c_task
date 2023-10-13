
#include <stdio.h>
#include <string.h>

#define MAX_USERS 10
#define MAX_USERNAME_LENGTH 20
#define MAX_PASSWORD_LENGTH 20

typedef struct {
    char username[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
} User;

int registerUser(User users[], int numUsers) {
    if (numUsers >= MAX_USERS) {
        printf("Maximum number of users reached.\n");
        return numUsers;
    }

    printf("Enter username: ");
    scanf("%s", users[numUsers].username);

    printf("Enter password: ");
    scanf("%s", users[numUsers].password);

    printf("Registration successful.\n");
    return numUsers + 1;
}

int loginUser(User users[], int numUsers) {
    char username[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    for (int i = 0; i < numUsers; i++) {
        if (strcmp(username, users[i].username) == 0 && strcmp(password, users[i].password) == 0) {
            printf("Login successful.\n");
            return 1;
        }
    }

    printf("Invalid username or password.\n");
    return 0;
}

int main() {
    User users[MAX_USERS];
    int numUsers = 0;
    int loggedIn = 0;

    while (!loggedIn) {
        int choice;
        printf("1. Register\n");
        printf("2. Login\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                numUsers = registerUser(users, numUsers);
                break;
            case 2:
                loggedIn = loginUser(users, numUsers);
                break;
            case 3:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }

        printf("\n");
    }

    // Rest of the program for logged in users

    return 0;
}