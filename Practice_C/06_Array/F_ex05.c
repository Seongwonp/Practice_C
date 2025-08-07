
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int arr[26] = { 0 };  //알파벳
    while (1) {
        char input;
           int a=scanf(" %c",&input);
              if (a != 1 || input == '\n')
                break;
        if (input >= 'a' && input <= 'z') {
            arr[input - 'a']++;  //소문자일경우
        }
        else if (input >= 'A' && input <= 'Z') {
            arr[input - 'A']++;  //대문자일경우
        }
        else {
            break;  //다른문자일경우
        }
    }

    for (int i = 0; i < 26; i++) {
        if (arr[i] > 0) {
                  printf("%c : %d\n", 'A' + i, arr[i]);
        }
           
    }

    return 0;
}
