#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    struct rectangle {
        int width;
        int height;
        int height2;
        int height3;
        int height4;
    };

    printf("%zu, %zu\n", sizeof(struct rectangle), 5*(sizeof(int)));
}