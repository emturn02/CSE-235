#include <stdio.h>
#include "name_reverse.h"
#include "name_length.h"

int main(){
    char name[] = "Ethan Turner";
    
    printf("Name: %s\n", name);
    
    reverse_order(name);
}