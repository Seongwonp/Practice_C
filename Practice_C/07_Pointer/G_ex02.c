
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int arr[4] = { 0 }; //숫자 저장
    int value[3] = { 0 }; //값 저장

    for (int i = 0; i <4; i++) {
        scanf("%d", &arr[i]);
    }
    int* ptr = value;

    ptr[0] = arr[0] + arr[1]; //num1+num2
    ptr[1] = ptr[0] - arr[2];//(num1+num2)-num3
    ptr[2] = ptr[1] * arr[3]; //{(num1+num2)-num3}*num4

    for (int j = 0; j < 3; j++) {
        printf("%d\n", ptr[j]);
    }
    
    return 0;
}
