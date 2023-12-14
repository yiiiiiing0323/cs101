#include <stdio.h>

int main()
{
    int i=59;
    if (i<30) {
        printf("免費");
    } else if (i>=240){
        printf("240元");
    } else {
        if (i%30==0){
            printf("%d元",i);
        } else {
            int h=(i/30+1)*30;
            printf("%d元",h);
        }
    }
    return 0;
}
