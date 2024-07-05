#include <stdio.h>
#include "heap.c"
#include "leak.c"
#include "utils.c"

int main(void) {
    logo();
    while(1){
        menu();
        int c = read_num();
        switch (c) {
            case 1:
                add_chunk();
                break;
            case 2:
                delete_chunk();
                break;
            case 3:
                edit();
                break;
            case 4:
                show();
                break;
            case 5:
                exit(0);
            default:
                puts("Invalid choice.");
        }
    }
}
