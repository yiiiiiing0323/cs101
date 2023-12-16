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

