#include <stdio.h>

main() {
	char tab[] = "\\t";
	char backspace[] = "\\b";
	char backslash[] = "\\\\";
	int c;
	while((c = getchar()) != EOF) {
		if(c == '\t') {
			printf("%s", tab);
		} else if(c == '\b') {
			printf("%s", backspace);
		} else if(c == '\\') {
			printf("%s", backslash);
		} else {
			putchar(c);
		}
	}
}
