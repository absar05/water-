#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  // for sleep() on Linux/macOS
//#include <windows.h> // Uncomment for Windows: use Sleep(milliseconds)

int main() {
    int i;
    int car1 = 0, car2 = 0;
    int finish = 20;

    printf("Car Race Game!\n\n");

    while (car1 < finish && car2 < finish) {
        car1 += rand() % 3;  // random step 0-2
        car2 += rand() % 3;

        // Display race track
        printf("Car 1: ");
        for (i = 0; i < car1; i++) printf("-");
        printf("🏎\n");

        printf("Car 2: ");
        for (i = 0; i < car2; i++) printf("-");
        printf("🚗\n");

        printf("\n");
        usleep(500000); // 0.5 second delay (Linux/macOS)
        // Sleep(500); // Use this for Windows
    }

    if (car1 >= finish && car2 >= finish)
        printf("It's a tie!\n");
    else if (car1 >= finish)
        printf("Car 1 wins!\n");
    else
        printf("Car 2 wins!\n");

    return 0;
}
