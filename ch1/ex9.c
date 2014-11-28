#include <stdio.h>

main() {
	int c;
	int is_space = 0;
	while((c = getchar()) != EOF) {
		if(c == ' ' && !is_space) {
			is_space = 1;
			putchar(c);
		}else if(c!= ' ') {
			is_space = 0;
			putchar(c);
		}
	}
}
