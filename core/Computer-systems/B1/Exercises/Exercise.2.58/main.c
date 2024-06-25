#include <stdio.h>

/* Returns 1 if the program is compiled and run on a little-endian machine and 0 otherwise */
int is_little_endian() {
    int x = 1;
    char* n = (char*) &x;
    return (int)(n[0]);
}

int main() {
    printf("%d\n", is_little_endian());
}