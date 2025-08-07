#include <stdio.h>
enum Month { Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

const int Month_Count = 12;

int main(void) {
    int i = 1;
    for (i = 1; i <= Month_Count; i++)
        printf("%d ", i);

    return 0;
}
