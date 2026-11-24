
#include <stdio.h>

enum Days {
    MONDAY = 10,
    TUESDAY = 20,
    WEDNESDAY = 30
};

int main() {

    enum Days d;

    d = MONDAY;
    printf("MONDAY = %d\n", d);

    d = TUESDAY;
    printf("TUESDAY = %d\n", d);

    d = WEDNESDAY;
    printf("WEDNESDAY = %d\n", d);

    return 0;
}
