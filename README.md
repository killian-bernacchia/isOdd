# isOdd
if statement sucks, lookup tables are built different💪.

To make it storage efficient I only stored 1 bit (true/false) for each 32 bits intergers.

So instead of an array of $2^{32}$ bytes, we got an array of $2^{32}$ bits.

To check if 'N' is odd or even you have to check if the Nth bit of the array is odd :
- `tab[N/32] & 1<<(N%32)`

But `+-*/%` opperators ar boriiiing... Let's make it with bits operators only :
- `1 & ( tab[i>>5]>>(i&0x1F) )`

Now we got good readability and efficienty, the best of two world👍

## tab_part.h :
```c
0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,... (*256)
0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,... (*256)
0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,... (*256)
.... (*32768)
```
