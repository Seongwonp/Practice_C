
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int line;
    scanf("%d",&line);
    for(int i=1; i<=line;i++){
        for(int blank=1;blank<=line-i;blank++){
            printf(" ");
        }
        for(int star=1;star<=i;star++){
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}
