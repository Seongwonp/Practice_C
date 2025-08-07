
#include <stdio.h>

void func(int x) {
    int input;

    while (1) {
        printf("이 정수를 맞추어 보세요 >> ");
        scanf("%d", &input);

        if (input < x) {
            printf("\n맞추어야 할 정수가 입력한 %d 보다 큽니다.\n", input);
        }
        else if (input > x) {
            printf("\n맞추어야 할 정수가 입력한 %d 보다 작습니다.\n", input);
        }
        else {
            printf("\n축하합니다! 정답은 %d 입니다.\n", x);
            break;
        }
    }
}

int main(int argc, const char * argv[]) {
    func(98);
}
