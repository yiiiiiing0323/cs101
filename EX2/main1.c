#include <stdio.h>

int main()
{
    int i=2;
    int h ;
    h=i&(i-1);
    if (h==0){
        printf("true\n");
    }
    else {
        printf("false\n");
    }
    
    return 0;
}
