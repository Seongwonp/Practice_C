
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int year;
    int sum = 0, yoon = 0;
    int i, j, k, l;
    int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        yoon = 1;
        days[1]++;
    }

    sum = 1;
    for (i = 1; i < year; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            sum += 366;
        else
            sum += 365;
    }

    j = sum % 7;
    for (i = 1; i <= 12; i++) {
        if (i >= 2)
            printf("\n%d월\n", i);
        else
            printf("%d월\n", i);

        printf("SUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\n");
        printf("===================================================\n");

        for (k = 1; k <= j; k++)
            printf("\t");

        for (l = 1; l <= days[i - 1]; l++) {
            printf("%d\t", l);
            if (j == 6) {
                j = -1;
                printf("\n");
            }
            j++;
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}
