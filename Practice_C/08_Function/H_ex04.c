#include <stdio.h>
void change_time(int x){
    int hour=0;
    int min=0;
    int sec=0;
    
    hour=x/3600;
    x%=3600;
    min=x/60;
    sec=x%60;
    if(hour>0)
        printf("%d시간 ",hour);
    if(min>0)
        printf("%d분 ",min);
    if(sec>0)
        printf("%d초 ",sec);
}

int main(void)
{
    int input_sec;
    scanf("%d",&input_sec);
    change_time(input_sec);
    
    return 0;
}
