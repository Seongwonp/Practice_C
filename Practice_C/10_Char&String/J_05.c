#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void my_strlen(char *string){
   int count=0;
   while(string[count]!='\0'){
       count++;
   }
    printf("Length : %d",count);
}
int main(void){
    char *string;
    if((string=malloc(sizeof(char)*80))==NULL)
        return -1;
        
    gets(string);
    my_strlen(string);
  return 0;
}
