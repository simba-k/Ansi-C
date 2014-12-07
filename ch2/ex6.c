#include <stdio.h>

int setbits(int x, int p, int n, int y);

int main() {
	setbits(1, 2, 3, 13);
	return 0;
}


//position starts with leftmost bit as position 1
int setbits(int x, int p, int n, int y) {
	int bits = sizeof(int) * 8;
	int xmask = 0;
	for(int i = 0; i < n; i++) {
		xmask |= 1 << ((bits - p - 1) - i);
	}
	int ymask = xmask >> bits - p - n;
	xmask = ~xmask;
	x &= xmask;
	y &= ymask;
	y = y << bits - p - n;
	x |= y;
	printf("%.8x\n", x);
}
