#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverseString(char *str,int length){
    for( int i=length-1; i>=0; i--)
        printf("%c",str[i]);
}
int main(void){
    char *str;
    int i=0;
    if((str=malloc(sizeof(char)*80)) == NULL){
        return -1;
    }
    gets(str);
    int length = strlen(str);
    reverseString(str,length);
  return 0;
}
