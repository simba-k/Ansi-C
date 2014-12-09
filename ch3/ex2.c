#include <stdio.h>

void escape(char s[], char t[]);
//void unescape(char s[], char t[]);

int main() {
	char s[] = "\tThis is tabbed and this has a line e\nnd";
	char t[45];
	escape(s, t);
	printf("%s\n%s\n", s, t);
	return 0;
}

void escape(char s[], char t[]) {
	int i,j;
	i = j = 0;
	int c;
	while((c = s[i++]) != '\0') {
		switch(c) {
			case '\n':
				t[j++] = '\\';
				t[j++] = 'n';
				break;
			case '\t':
				t[j++] = '\\';
				t[j++] = 't';
				break;
			default:
				t[j++] = c;
				break;
		}
	}
	t[j++] = '\\';
	t[j++] = '0';
	t[j] = '\0';
}
