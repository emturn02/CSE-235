#include <stdio.h>
#include <ctype.h>
#include "name_length.h"

void letter_count(char *name){
    int count = 0;

    for (int i = 0; name[i] != '\0'; i++){
        if (isalpha(name[i])){
            count++;
        }
    }

    printf("number of Letters in name (excluding spaces): %d\n", count);
}