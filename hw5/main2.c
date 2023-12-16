#include <stdio.h>
#include <math.h>
int main()
{
    double PI=4.0f;
    double targetPI = 3.14159;  
    double epsilon = 1e-6;
    int i;
    
    for(i=2; ;i++){
        double pi=4.0/(2*i-1);
        
        if(i%2==0){
            PI-=pi;
        }
        else{
            PI+=pi;
            
        }
        double diff=fabs(PI-targetPI);
        if(diff < epsilon){
            printf("%.5f\n",PI);
            
            break;
        }
        
    
    }
        
    printf("%d\n",(i-1));

    return 0;
}


