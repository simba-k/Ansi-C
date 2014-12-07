#include <stdio.h>

void squeeze(char s1[], char s2[]);

int main() {
	char s[] = "abcdeffghijklm";
	squeeze(s, "flm");
	printf("%s\n", s);
}

void squeeze(char s1[], char s2[]) {
	int i, j;

	int prnt = 1;
	for(i = j = 0; s1[i] != '\0'; i++) {
		for(int ii = 0; s2[ii]!='\0'; ii++) {
			if(s1[i] == s2[ii]) {
				prnt = 0;
				break;
			}
		}
		if(prnt) {
			s1[j++] = s1[i];
		}
		prnt = 1;
	}
	s1[j] = '\0';
}
