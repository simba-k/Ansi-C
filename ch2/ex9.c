/*
3 =        -1 =
0000 0011  1111 1111

3 + -1 = 

0000 0011
1111 1111
---------
0000 0010


x &= (x-1)

0000 0011
0000 0010
---------
0000 0010


WORKS

2 - 1 = 2 + -1

0000 0010
1111 1111
---------
0000 0001

0000 0010
0000 0001
---------
0000 0000

WORKS

the x - 1 inverts the lowest bits up to (inclusive) the rightmost 1 bit.
The and then turns all these new 1s back into 0s so only the rightmost bit is lost */
#include <stdio.h>

int bitcount(int x);

int main() {
	printf("%d\n", bitcount(0xf3));
	return 0;
}

int bitcount(int x) {
	int i = 0;
	while(x != 0) {
		x &= (x - 1);
		i++;
	}
	return i;
}
