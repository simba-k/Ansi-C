#include <stdio.h>

void expand(char s1[], char s2[]);
int explode(char strt, char end, char s[], int offset);

int main() {
	char s1[] = "-a-defghi-z now i know0-9-";
	char s2[500];
	expand(s1, s2);
	printf("%s\n%s\n", s1, s2);
	return 0;
}

void expand(char s1[], char s2[]) {
	int c;
	int i, j;
	i = j = 0;
	//First char does not count in expansion.
	s2[j++] = s1[i++];
	while( (c = s1[i]) != '\0') {
		if(c == '-') {
			j = explode(s1[i-1], s1[i + 1], s2, j-1);
			i+=2;
		} else {
			s2[j++] = s1[i++];
		}
	} s2[j] = '\0'; } //TODO better error checking
int explode(char strt, char end, char s[], int offset) {
	//last char does not count in expansion
	if(end == '\0') {
		s[offset++] = strt;
		s[offset++] = '-';
		s[offset] = '\0';
		return offset;
	}
	char c = strt;
	do {
		s[offset++] = c;
	} while ( c++ < end);
	return offset;
}
