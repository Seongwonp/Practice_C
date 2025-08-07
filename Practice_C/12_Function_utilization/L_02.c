#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>


 int main(void){
     char *str;
     if ((str = (char*)malloc(sizeof(char) * 100)) == NULL)
         return -1;
     gets(str);
     for (int i = 0; str[i] != '\0'; i++) {
         if (isupper(str[i])) {
             printf("%d", (int)tolower(str[i]));
         }
         else if (islower(str[i])) {
             printf("%d", (int)toupper(str[i]));
         }
         else
             printf("%d", (int)str[i]);
     }
     

 return 0;
 }
