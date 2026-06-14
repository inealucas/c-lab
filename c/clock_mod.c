#include <stdio.h>

int main() {
    int hour = 12;

    if (hour < 6) {
        printf("You should be asleep.\n");
    } else if (hour < 12) {
        printf("Morning. Coffee first.\n");
    } else if (hour < 18) {
        printf("Afternoon. Probably procrastinating.\n");
    } else if (hour < 22) {
        printf("Evening. Almost done.\n");
    } else {
        printf("Go to bed.\n");
    }

    return 0;
}