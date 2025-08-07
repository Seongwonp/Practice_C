
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x,y;
    int x1,y1,x2,y2;
    scanf("%d %d",&x,&y);
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    
    if ((x >= x1 && x <= x2) || (x >= x2 && x <= x1)) {
        if ((y >= y1 && y <= y2) || (y >= y2 && y <= y1))
            printf("True\n");
           
        else
            printf("False\n");
        
    }
    else
        printf("False\n");
    
    return 0;
}
