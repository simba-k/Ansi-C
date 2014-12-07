#include <stdio.h>
#define MAXLINE 10

int getline1(char line[], int maxline); //name changed to avoid name conflict
void copy(char to[], char from[]);

main() {
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while((len = getline1(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	if (max > 0)
		printf("%s", longest);
	return 0;
}

int getline1(char s[], int lim) {
	int c, i;
	int done = 0;

	for(i=0; i<lim-1; ++i) {
		if((c=getchar())==EOF ||  c=='\n') {
			done = 1;
			break;
		}
		s[i] = c;
	}
	if(c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	while(!done && (c=getchar()) != '\n'  && c != EOF)
		++i;
	return i;
}

void copy(char to[], char from[]) {
	int i;
	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}
