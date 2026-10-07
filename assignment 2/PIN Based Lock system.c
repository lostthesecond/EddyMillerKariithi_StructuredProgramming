#include <stdio.h>
#include <string.h>

#ifdef _WIN32
    #include <windows.h>
    #define SLEEP_SEC(seconds) Sleep((seconds) * 1000)
#else
    #include <unistd.h>
    #define SLEEP_SEC(seconds) sleep(seconds)
#endif

int main(void) {
    char pin[20];
    char correct_pin[] = "1234";
    int choice;
    int authenticated = 0;

    while (!authenticated) {
        int max_attempts = 3;

        for (int attempt = 1; attempt <= max_attempts; attempt++) {
            printf("Input your PIN (Attempt %d of %d): ", attempt, max_attempts);
            scanf("%19s", pin);

            size_t len = strlen(pin);

            if (len < 4) {
                printf("PIN is too short.\n");
            } else if (len > 4) {
                printf("PIN is too long.\n");
            } else {
                if (strcmp(correct_pin, pin) == 0) {
                    printf("PIN verified!\n\n");
                    authenticated = 1;
                    break; // Exit inner loop
                } else {
                    printf("PIN is exactly 4 digits\n");
                }
            }

            if (attempt < max_attempts) {
                printf("Attempts remaining: %d\n\n", max_attempts - attempt);
            }
        }

        if (authenticated) {
            printf("=== Device Menu ===\n"
                   "1. Open Door\n"
                   "2. Change Username\n"
                   "3. Change PIN\n"
                   "4. Exit\n"
                   "Please enter your choice: ");

            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    printf("\nAccess granted.Door Unlocked.\n");
                    break;
                case 2:
                    printf("\nChange Username feature coming soon.\n");
                    break;
                case 3:
                    printf("\nChange PIN feature coming soon.\n");
                    break;
                case 4:
                    printf("\nExiting system...\n");
                    break;
                default:
                    printf("\nInvalid option! Please try again.\n");
                    break;
            }
        } else {

            printf("\nSystem locked! Wait for 5 seconds...\n");

            for (int countdown = 5; countdown > 0; countdown--) {
                printf("%d... ", countdown);
                fflush(stdout);
                SLEEP_SEC(1);
            }

            printf("\n try again.\n\n");
        }
    }

    return 0;
}
