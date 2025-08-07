
#include <stdio.h>

int main(int argc, const char * argv[]) {
    double money;
    char x;//달러인지 원인지
    scanf("%lf %c",&money,&x);
    switch(x){
        case 'w':
             printf("%lf달러\n",money*0.00087);
             break;
         case 'd':
             printf("%.0lf원\n",money*1152);
             break;
    }
    
     
     
     
     return 0;
}
