#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num;
    scanf("%d", &num);


    char** strings = (char**)calloc(num, sizeof(char*));

    if (strings == NULL) {
        return -1;
    }


    for (int i = 0; i < num; ++i) {
        strings[i] = (char*)calloc(100, sizeof(char)); //종료문자 포함 100
    }


    for (int i = 0; i < num; ++i) {
        scanf("%s", strings[i]);
    }


    for (int i = 0; i < num; ++i) {
        printf("%s\n", strings[i]);
    }


    for (int i = 0; i < num; ++i) {
        free(strings[i]);
    }
    free(strings);

    return 0;
}
