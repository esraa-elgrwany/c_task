Esraa 🦋, [7/6/2023 6:43 PM]
السلام عليكم 
مستنينكم يوم السبت 8 / 7 ان شاء الله في *أول محاضرة تعريفيه  في دبلومة الـ Flutter  مع باشمهندس محمد حموده  من الساعه1م-3م بفرع الدقي*🤩

العنوان:
 6 شارع التحرير فوق محطة مترو البحوث مباشره -العماره اللي فيها معرض التمساح -الدور الخامس
  📍لوكيشن: bit.ly/Route-Dokki 
     
🔵 بخصوص الدرايف الناس كلها اتعملها اكسيس ادخلوا ع اللينك دا ب الميل اللي بعتوه لينا
https://bit.ly/Flutter-Cycle9-Videos

🔴 لو حد متعملوش اكسيس يبعتلنا الميل Private وهنعملوا ان شاء الله .. ياريت تبعتوا ال *Gmail* اللي هتستخدموه طول الكورس. 

بالتوفيق 
ويارب تكون بداية خير عليكم كلكم 💙

Esraa 🦋, [10/13/2023 3:58 PM]
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