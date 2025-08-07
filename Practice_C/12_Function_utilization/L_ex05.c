#include <stdio.h>
#include <string.h>
void my_strcat(char *str1,char*str2) {
    while (*str1 != '\0') {
        str1++;
    }
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}
int main(void){
    char str1[40];
    char str2[40];
    
    gets(str1);
    gets(str2);

    my_strcat(str1, str2);

    printf("my_strcat 함수 결과 : %s", str1);
    return 0;
}
