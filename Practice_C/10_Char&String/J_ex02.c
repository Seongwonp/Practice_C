#include <stdio.h>
#include <stdlib.h>


void count(char *str){
        int upper_count[26]={0};
        int lower_count[26]={0};
        
        for(int i=0; str[i]!='\0'; i++){
        char alpa = str[i];
        
        if(alpa >='a' && alpa <='z')
            lower_count[alpa -'a']++;
        
        else if(alpa >='A' && alpa <='Z')
            upper_count[alpa -'A']++;
    }
    
    
    for(int j=0; j<26; j++){
        if(upper_count[j]>0){
                printf("%c : %d\n",'A' + j, upper_count[j]);
            }
        }
    for(int j=0; j<26; j++){
        if(lower_count[j]>0){
                printf("%c : %d\n",'a' + j, lower_count[j]);
            }
        }
}

int main()
{
    char *str;
    if((str=malloc(sizeof(char)*201))==NULL)
        return -1;
        
    gets(str);
    
    printf("<전체 알파벳의 개수>\n");
    
    count(str);
    
    return 0;
}
