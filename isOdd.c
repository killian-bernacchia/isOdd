#include <stdio.h>
#include <stdlib.h>

#include "tab.h"

int isOdd(uint32_t i) { return 1 & ( tab[i>>5]>>(i&0x1F) ); }

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }
    unsigned long num = strtoul(argv[1], NULL, 10);
    printf("%u",isOdd(num));
    return 0;
}