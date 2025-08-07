#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int count[26] = {0};
    char ch;
    char *str;
    if((str=malloc(sizeof(char)*80))==NULL)
        return -1;

    gets(str);
    int length = strlen(str);
    
    for(int i=0; i<length;i++){
        ch=str[i];
        if( (ch >='a' && ch <='z') || (ch >='A' && ch <='Z')){
            if(ch >='a' && ch <='z'){
                ch= ch - 'a' + 'A';
            }
            count[ch-'A']++;
        }
    }
    
    for(int i =0; i <26; i++){
        if(count[i]>0)
            printf("%c : %d\n",'A'+i, count[i]);
    }
  return 0;
}
