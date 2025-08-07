
#include <stdio.h>

int main(int argc, const char * argv[]) {
    char abc[20]; //문자형 배열 선언언
    int i = 0;

    while (i < 20) {
        char input;
        scanf(" %c", &input); // 공백 문자를 사용하여 엔터 키 입력을 무시
        if (input == '.') {
            break; // 마침표 입력 받을 때 까지 문자 입력 받아서 입력 받은 모든 문자 출력
        }

        abc[i] = input;
        i++;
    }

    for (int j = 0; j < i; j++) {
        printf("%c", abc[j]);
    }

    return 0;
}
