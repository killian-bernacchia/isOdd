# isOdd
if statement sucks, lookup tables are built different💪.

To make it storage efficient I only stored 1 bit (true/false) for each 32 bits unsigned intergers.

So instead of an array of 4294967296 bytes, we got an array of 4294967296 bits (134217728 bytes).

To check if 'N' is odd or even you have to check if the Nth bit of the array is odd :
- `tab[N/32] & 1<<(N%32)`

But `+-*/%` opperators ar boriiiing... Let's make it with bits operators only :
- `1 & ( tab[i>>5]>>(i&0x1F) )`

Now we got good readability and efficienty, the best of two world👍

For more convenient use, in isOdd.h a macro is setted for you to use :
- `isOdd(N) (1 & ( tab[N>>5]>>(N&0x1F) ))`
- `1` : is odd
- `0` : is not odd

If you compile isOdd.c you can use the executable in your console to know if a number is odd or is not odd.

I might make an other version to check if a number is even or not even.

## array_part.h :
```c
0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,... (*256)
0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,... (*256)
0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,... (*256)
.... (*32768)
```
