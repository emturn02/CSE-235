#include <stdio.h>

#define swap(a, b){ int temp = a; a = b; b = temp; }

int main(){
    int a = 2;
    int b = 3;

    printf("Before swap: a = %d, b = %d\n", a, b);

    swap(a, b);

    printf("After swap: a = %d, b = %d\n", a, b);
}