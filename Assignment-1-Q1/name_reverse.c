#include <stdio.h>
#include <string.h>
#include "name_reverse.h"

void reverse_order(char *name){
    char first[50];
    char last[50];

    if (sscanf(name, "%s %s", first, last) == 2){
        printf("Reversed Name: %s %s\n", last, first);
    }
}