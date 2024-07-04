#include <stdio.h>
#include "heap.c"
#include "leak.c"

int main(void) {
    printf("Hello, World!\n");
    leak_libc_func_addr();
    return 0;
}
