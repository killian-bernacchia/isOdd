# isOdd
if statements suck, lookup tables are built different💪.

To check if a number 'i' is odd you check if the bit number i is a 1 or a 0
  `tab[i/32] & 1<<(i%32)`
But +-*/% are not funny, so let's use only bits operators.
  `1 & ( tab[i>>5]>>(i&0x1F) )`
Now we got more readability and efficienty 👍
