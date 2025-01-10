#include <stdio.h>
#include <stdlib.h>

#include "isOdd.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }
    unsigned long num = strtoul(argv[1], NULL, 10);
    printf("%u",isOdd(num));
    return 0;
}
