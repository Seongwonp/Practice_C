#include <stdio.h>
#include <ctype.h>

int main(void){
    char arr[80];
    int blank=0;
    gets(arr);
    for (int i = 0; arr[i] != '\0'; i++) {
        if (isspace(arr[i]))
            blank++;

    }
    printf("%d", blank);
    return 0;
}
