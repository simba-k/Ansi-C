#include <stdio.h>

#define ASCIISIZE 128

main() {
	int amnts[ASCIISIZE], c;
	for(int i = 0; i < ASCIISIZE; i++) {
		amnts[i] = 0;
	}
	while((c = getchar()) != EOF) {
		amnts[c]++;
	}
	amnts[EOF]++;
	for(int i = 0; i < ASCIISIZE; i++) {
		if(amnts[i] != 0) {
			putchar(i);
			for(int ii = 0; ii < amnts[i]; ii++) {
				putchar('-');
			}
			putchar('\n');
		}
	}
}
