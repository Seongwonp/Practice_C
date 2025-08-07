#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    char str[81];
    gets(str);
    int length = strlen(str);
    for( int i=length-1; i>=0; i--)
        printf("%c",str[i]);
  return 0;
}
