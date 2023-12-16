/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i=1234567;
    int num;
    int tenthousand=i/10000;
    int thousand=(i%10000)/1000;
    int hundred=(i%1000)/100;
    int tens = (i % 100) / 10;
    int ones = i % 10;
    num=(i-thousand*1000-ones)+ones*1000+thousand;
    printf("%d",num);

    return 0;
}

