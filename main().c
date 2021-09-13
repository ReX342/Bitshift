#include <stdio.h>
#include <stdint.h>
int main () {
    uint64_t dx= 0x152345670;
    while (dx) putchar (0x0417765736F6d65210A >> ((dx >> 4) << 3));
    return 0;
}
