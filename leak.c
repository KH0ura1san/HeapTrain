#include <stdio.h>
#include <libc.h>

void leak_libc_func_addr(){
    printf("[+] puts address: %p\n", puts);
    printf("[+] gets address: %p\n", gets);
    printf("[+] write address: %p\n", write);
    printf("[+] read address: %p\n", read);
}