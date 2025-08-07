#include <stdio.h>

int main(int argc, const char * argv[]) {
    int month;
    scanf("%d",&month);
    switch(month){
        case 1 : case 2 : case 3:
        printf("1사분기");
        break;
        
        case 4 : case 5 : case 6:
        printf("2사분기");
        break;
        
         case 7 : case 8 : case 9:
        printf("3사분기");
        break;
        
         case 10 : case 11 : case 12:
        printf("4사분기");
        break;
        
    }
        
    return 0;
    
    
}
