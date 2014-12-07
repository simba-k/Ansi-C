#include <stdio.h>

void lower(char s[]);

int main() {
	char s[] = "TesT 12' Gbb";
	lower(s);
	printf("%s\n", s);
	return 0;
}

void lower(char s[]) {
	int delta = 'a' - 'A';
	int i = 0;
	while(s[i] != '\0') {
		s[i] >= 'A' && s[i] <= 'Z' ? s[i++] += delta : i++;
	}
}
