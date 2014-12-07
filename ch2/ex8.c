#include <stdio.h>

int rightrot(int x, unsigned int n);

int main() {
	printf("%.8x\n", rightrot(5, 2));
	return 0;
}

int rightrot(int x, unsigned int n) {
	int bit = 0x1;
	int mask = 0x0;
	for(int i = 0; i < n; i++, bit*=2) {
		mask |= bit;
	}
	int rot = x & mask;
	int size = sizeof(int) * 8;
	rot = rot << size - n;
	x = x >> n;
	x |= rot;
	return x;
}
