#include <stdio.h>
#include <stdlib.h>

int read_num(){
    int c;
    char num[10] = {0};
    for(int i = 0; i < 9; i++){
        c = getchar();
        if(c == '\n')
            break;
        num[i] = (char)c;
    }
    return atoi(num);
}

void safe_gets(char *string, int length){
    int c, i;
    for(i = 0; i < 9; i++){
        c = getchar();
        if(c == '\n')
            break;
        string[i] = (char)c;
    }
    string[i] = '\0';
}

