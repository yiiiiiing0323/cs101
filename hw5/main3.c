/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    for (int count = 1; count <= 81; count++) {
        int i = (count - 1) / 9 + 1; // 行
        int j = (count - 1) % 9 + 1; // 列
        printf("%d x %d = %d\t", i, j, i * j);

        if (count % 9 == 0) {
            printf("\n");
        }
    }

    return 0;
}

