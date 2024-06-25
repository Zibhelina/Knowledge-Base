#include <stdio.h>

int is_little_endian() {
    union {
        short int ival;
        unsigned char bytes[sizeof(short int)];
    } u = {1};
    return u.bytes[0];
}

int main() {
    printf("%d\n", is_little_endian());
    return 0;
}