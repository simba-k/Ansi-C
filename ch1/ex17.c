#include <stdio.h>
#define MAXLINE 1000

int getLine(char s[], int len);

main() {
	char line[MAXLINE];
	int len;
	while((len = getLine(line, MAXLINE)) > 0)
		if(len > 80)
			printf("%s", line);
}

int getLine(char s[], int len) {
	int i, c;
	for(i = 0; i < len-1 && (c = getchar()) != '\n' && c != EOF; i++) {
		s[i] = c;
	}
	if(c == '\n') {
		s[i] = '\n';
		i++;
	}
	s[i] = '\0';
	return i;
}
