#include <stdlib.h>
#include <string.h>
#include "utils.c"
void *chunkList[0x10000] = {0};

void add_chunk(){
    long index, size;
    printf("Please input chunk index: ");
    index = read_num();
    printf("Please input chunk size: ");
    size = read_num();
    void *chunk = malloc(size);
    if(!chunk){
        puts("Malloc error!");
        exit(1);
    }
    chunkList[index] = chunk;
}

void delete_chunk(){
    char flag[4];
    long index;
    printf("Please input chunk index: ");
    index = read_num();
    free(chunkList[index]);
    while(1){
        printf("Set pointer to null? (Yes/No): ");
        safe_gets(flag, 3);
        if(!strcmp(flag, "Yes")){
            chunkList[index] = 0;
            break;
        }
        if(!strcmp(flag, "No")){
            break;
        }
        puts("Invalid input!");
    }
}

void edit(){
    long index, size;
    printf("Please input chunk index: ");
    index = read_num();
    printf("Please input chunk size: ");
    size = read_num();
    printf("Please input chunk content: ");
    read(0, chunkList[index], size);
}

void show(){
    char flag[6];
    long index, length;
    printf("Please input chunk index: ");
    index = read_num();
    while(1){
        printf("Use write() or puts() to print? (write/puts): ");
        safe_gets(flag, 5);
        if(!strcmp(flag, "write")){
            printf("Please input length: ");
            length = read_num();
            write(1, chunkList[index], length);
            break;
        }
        if(!strcmp(flag, "puts")){
            puts(chunkList[index]);
            break;
        }
        puts("Invalid input!");
    }

}

void logo(){
    puts("  _    _               _______        _       ");
    puts(" | |  | |             |__   __|      (_)      ");
    puts(" | |__| | ___  __ _ _ __ | |_ __ __ _ _ _ __  ");
    puts(" |  __  |/ _ \\/ _` | '_ \\| | '__/ _` | | '_ \\ ");
    puts(" | |  | |  __/ (_| | |_) | | | | (_| | | | | |");
    puts(" |_|  |_|\\___|\\__,_| .__/|_|_|  \\__,_|_|_| |_|");
    puts("                   | |                        ");
    puts("                   |_|                        ");
}

void menu(){
    puts("What do you want to do?");
    puts("1. Add a chunk.");
    puts("2. Delete a chunk");
    puts("3. Edit a chunk");
    puts("4. Show a chunk");
    printf("Please input your choose: ");
}