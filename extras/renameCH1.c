#include <stdio.h>
main() {
	char val[] = "mv ex11.c ex1.c";
	for(int i = 1; i < 10; i++) {
		val[6] = i + 48;
		val[12] = i + 48;
		system(val);
	}
}
