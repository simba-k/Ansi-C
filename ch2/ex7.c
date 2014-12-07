#include <stdio.h>

int invert(int x, unsigned int p, unsigned int n);

int main() {
	printf("%.8x\n", invert(3, 2, 5));
}

//position starts with rightmost bit as position 1
int invert(int x, unsigned int p, unsigned int n) {
	int bit = 0x1;
	int mask = 0;
	for(int i = 0; i < n; i++, bit*=2) {
		mask |= bit;
	}
	mask = mask << p - 1;
	int imask = ~mask;
	int invBits = (~x) & mask;
	x = x & imask;
	x |= invBits;
	return x;
}
