#include <stdio.h>
#include <stdint.h>
int main () {
    /*
    7   6   5   4   3   2   1   0
    61  77  65  73  6F  6d  21  A0
    a   w   e   s   o   m   !   /n
    41
    A                   

    reverse awesome (repeat "e") !  + /n
    ! = 1
    e = 5
    m = 2
    o = 3
    ...
    /newline = 0

    Putting ! in variable 1
    put e in variable 5
    1 = !
    5 = e
    2 = m
    o = 3
   */ 
    uint64_t dx = 0x152345670;
    while (dx) putchar(0x417765736F6d210A >> ((dx >>= 4) << 3));
    return 0;
}
