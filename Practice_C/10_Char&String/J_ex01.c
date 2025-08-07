#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char *str;
    char find_language;
    if((str=malloc(sizeof(char)*51))==NULL) //개행문자 포함
        return -1;
        
    gets(str);
    scanf(" %c",&find_language);
    
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==find_language){
            printf("문자 %c의 인덱스 위치는 %d입니다.",find_language, i);
        }
    }
    
    return 0;
}
