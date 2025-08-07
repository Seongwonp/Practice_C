
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int year;
    scanf("%d",&year);
    if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        printf("윤년");
    else
        printf("평년");
    
    
    return 0;
}
