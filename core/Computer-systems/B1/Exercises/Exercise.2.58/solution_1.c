#include <stdio.h>

int is_little_endian() {
    short int x = 1;
    return ((char*) &x)[0];
}

int main() {
    printf("%d\n", is_little_endian());
}