#include <stdio.h>
#define MAXLINE 1000

int getLength(char s[]);
void reverse(char s[]);
void copy(char to[], char from[]);
int getLine(char s[], int len);

main() {
	char s[MAXLINE];
	int len;
	while((len = getLine(s, MAXLINE)) > 0) {
		reverse(s);
		printf("%s", s);
	}
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

void reverse(char s[]) {
	int len = getLength(s);
	char buf[len];
	copy(buf, s);
	int e = len - 2;
	if(buf[e] == '\n')
		e--;
	int i = 0;
	while(s[i] != '\n' && s[i] != '\0') {
		s[i++] = buf[e--];
	}
}

int getLength(char s[]) {
	int i = 0;
	while(s[i++] != '\0')
		;
	return i;
}

void copy(char to[], char from[]) {
	int i = 0;
	while((to[i] = from[i]) != '\0')
		i++;
}
