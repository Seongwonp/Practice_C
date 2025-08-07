
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int line;
    scanf("%d",&line);
    for(int i=1; i<=line;i++){
        for(int blank=1;blank<=line-i;blank++){
            printf(" ");
        }
        for(int star=1;star<=2*i-1;star++){
            printf("*");
        }
        printf("\n");
    }
    
    for(int i=line-1; i>=1;i--){
        for(int blank=1;blank<=line-i;blank++){
            printf(" ");
        }
        for(int star=1;star<=2*i-1;star++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
