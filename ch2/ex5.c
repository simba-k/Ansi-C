#include <stdio.h>

int any(char s1[], char s2[]);

int main() {
	char s[] = "abcdeffghijklm";
	printf("%d\n", any(s, "flm"));
}

int any(char s1[], char s2[]) {
	int i, j;

	for(i = j = 0; s1[i] != '\0'; i++) {
		for(int ii = 0; s2[ii]!='\0'; ii++) {
			if(s1[i] == s2[ii]) {
				return i;
			}
		}
	}
	return -1;
}
