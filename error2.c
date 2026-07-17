#include <stdio.h>
#include <string.h>

void check_access() {
    int authenticated = 0; // 0 = Access Denied, 1 = Access Granted
    char password[50];      // Can only hold 7 characters + null terminator

    printf("Initial status of authenticated: %d\n", authenticated);
    printf("Writing a long string into a small buffer...\n");

    // Intentional bug: "SUPER_SECRET_PASSWORD" is 21 characters long.
    // It overflows 'password' and overwrites 'authenticated' in memory.
    strcpy(password, "SUPER_SECRET_PASSWORD");

    printf("Post-overflow status of authenticated: %d\n", authenticated);

    if (authenticated != 0) {
        printf("SUCCESS: Security bypassed via memory corruption!\n");
    } else {
        printf("DENIED: System secure.\n");
    }
}

int main() {
    check_access();
    return 0;
}

