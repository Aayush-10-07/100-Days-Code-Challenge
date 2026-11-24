
#include <stdio.h>

enum Role {
    ADMIN = 1,
    USER,
    GUEST
};

int main() {
    int choice;

    printf("1. ADMIN");
    printf("\n2. USER");
    printf("\n3. GUEST");

    printf("\nEnter your role: ");
    scanf("%d", &choice);

    switch(choice) {
        case ADMIN:
            printf("Welcome Admin! You have full access.");
            break;

        case USER:
            printf("Welcome User! You have limited access.");
            break;

        case GUEST:
            printf("Welcome Guest! You have guest access.");
            break;

        default:
            printf("Invalid role selected.");
    }

    return 0;
}
