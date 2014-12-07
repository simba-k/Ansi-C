#include <stdio.h>

int main() {
	int i = 0;
	int lim = 1000;
	char s[lim];
	char c;
	while(i < lim-1) {
		c = getchar();
		if(c == '\n')
			break;
		if(c == EOF)
			break;
		s[i++] = c;
	}
	s[i]  = '\0';
	printf("%s", s);
	return 0;
}
