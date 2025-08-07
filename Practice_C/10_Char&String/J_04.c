#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char *str1;
    char *str2;
    char *str3;
    char *str;
    if((str=malloc(sizeof(char)*100))==NULL)
        return -1;
    if(((str1=malloc(sizeof(char)*30))==NULL) || ((str2=malloc(sizeof(char)*30))==NULL) || ((str3=malloc(sizeof(char)*30))==NULL))
        return -1;
    
    int count=0;
    gets(str1);
    gets(str2);
    gets(str3);
    
    for(int i=0;str1[i] != '\0';i++){
      count++;
    }
    for(int i=0;str2[i] != '\0';i++){
      count++;
    }
    for(int i=0;str3[i] != '\0';i++){
      count++;
    }

    strcat(str,str1);
    strcat(str,str2);
    strcat(str,str3);
    printf("Merged string length : %d\n",count);
    printf("Merged string : %s",str);
    
    
    
    
  return 0;
}
