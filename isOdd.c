#include <stdio.h>
#include <stdlib.h>

#include "tab.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }
    unsigned long num = strtoul(argv[1], NULL, 10);
    char isOdd = 1 & ( tab[num>>5]>>(num - ((num>>5)<<5)) );
    printf("%u",isOdd);
    return 0;
}