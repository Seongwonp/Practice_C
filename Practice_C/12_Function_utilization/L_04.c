#include <stdio.h>

int my_strcmp(char s1[], char s2[]) //strcmp 따로 작성성
{
    int i = 0; // 변수 지정정
    
    while(s1[i] != '\0' || s2[i] != '\0') // strcmp 정의식
    {
        if (s1[i] > s2[i])  // s2 문자가 s1 문자보다 작을때
            return 1;
            
        else if (s1[i] < s2[i])  // s1 문자가 s2 문자보다 작을때
            return -1;
            
        else // 그외 아닐 경우
            i++; //아닐 경우 증가
    }
    
    return 0;
}

int main(void)
{
    char a[50], b[50]; //변수 선언
    
    scanf("%s",a); //입력 받기
    scanf("%s",b); //입력 받기기
    
    printf("%d\n", my_strcmp(a, b)); //출력
    
    return 0;
}
