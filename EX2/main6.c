#include <stdio.h>

int main()
{
    int i=1000;
    if (i<=1500) {
        printf("70元");
    }else{
        int j=i-1500;
        if (i%100==0){
            int m=j/100+70;
            printf("%d元",m);
        } else{
            int n=(j/100+1)+70;
            printf("%d元",n);
        }
    }

    return 0;
}
