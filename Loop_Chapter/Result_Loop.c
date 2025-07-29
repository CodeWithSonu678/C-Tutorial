 #include <stdio.h>
#include <stdlib.h>
#include <time.h>

// // ANSI Colors
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BOLD    "\x1b[1m"
#define RESET   "\x1b[0m"

void printBar(int temp) {
    // Choose bar color
    if (temp <= 35) {
        printf(GREEN);
    } else if (temp <= 50) {
        printf(YELLOW);
    } else {
        printf(RED);
    }

    for (int i = 0; i < temp; i += 2) {
        printf("|");
    }

    printf(RESET);
}

int main() {
    int seconds, i, temp;

    srand(time(NULL));

    printf("Kitne seconds tak temperature monitor karna hai ? :");
    scanf("%d", &seconds);

    printf("\n" BOLD "Temperature Graph:\n\n" RESET);

    for (i = 1; i <= seconds; i++) {
        temp = rand() % 60;  // 0–59 °C

        printf("Second %2d | %2d°C: ", i, temp);
        printBar(temp);
        printf("\n");

        // 🔔 Alert + Beep
        if (temp > 50) {
            printf(RED BOLD "🚨 ALERT: High Temperature (%d°C)!\a\n" RESET, temp);
        }
    }

    printf("\n" BOLD "Monitoring complete.\n" RESET);

    return 0;
}
