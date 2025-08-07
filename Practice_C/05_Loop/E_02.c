/* do while문
#include <stdio.h>

int main()
{
    int num;
    int count=0;
    scanf("%d",&num);
    do{
        if(num<0)
            break;
        num/=10;
        count++;
    }while(num!=0);
    printf("%d",count);

    return 0;
}
*/

#include <stdio.h>
int main(int argc, const char * argv[]) {
    int num;
    int count=0;
    scanf("%d",&num);
    while(num!=0 && num>0){
        num/=10;
        count++;
    }
    printf("%d",count);

    return 0;
}
