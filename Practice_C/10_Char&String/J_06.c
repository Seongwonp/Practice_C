#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void my_strchr(char *str, char a){
    for(int i = 0; str[i] !='\0';i++){
        if(str[i] == a)
            printf("%c ",a);
    }
}
int main(void){
    char *str;
    if((str=malloc(sizeof(char)*80))==NULL)
        return -1;
        
    char ch;
    gets(str);
    scanf(" %c",&ch);
    my_strchr(str,ch);
  return 0;
}
