
#include <stdio.h>
#include <ctype.h> // 힌트 -> ctype 헤더를 사용하여 작성

int main(int argc, const char * argv[]) {
    char input[100];
    int count = 0;


    while (count < 100)
    {
        char ct;
        scanf(" %c", &ct);

        if (islower(ct)) // islower 대문자 소문자 확인인
        {
            input[count] = ct;
            count++;
        }
        
        else {
            break; // 소문자가 아닌 문자가 입력되면 입력 종료
        }
        
    }

    // 선택 정렬을 사용하여 입력받은 문자 정렬
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (input[i] > input[j])
            {
                char temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }


    for (int i = 0; i < count; i++)
    {
        printf("%c\n", input[i]);
    }

    return 0;
}
