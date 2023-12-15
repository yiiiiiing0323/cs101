#include <stdio.h>

int main() {
    int n=4;
    int i;
    for (int i=1;i<=n;i++){
        
        printf("%*d",n+1-i,i);
        for(int k=2;k<=i;k++){
            printf(" %d",i);
        }
        printf("\n");
    }
    return 0;
}
