#include <stdio.h>

#define MAXLINE 1000

int isEmptyLine(char s[]);
int rmBackSpace(char s[], int len);
int rmFrontSpace(char s[], int len);
void cleanLine(char s[], int len);
int getLine(char s[], int max);
void copy(char to[], char from[], int fOffset, int fLen);

main() {
	char line[MAXLINE];
	int len;
	while((len = getLine(line, MAXLINE)) > 0) {
		cleanLine(line, len);
		printf("%s", line);
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

void cleanLine(char s[], int len) {
	int offset = rmFrontSpace(s, len);
	int dLen = rmBackSpace(s, len);
	if(isEmptyLine(s)) {
		s[0] = '\0';
		return;
	}
	len -= offset + dLen + 1;
	copy(s, s, offset, len);
}

int rmFrontSpace(char s[], int len) {
	int l = 0;
	while(l < len) {
		int c;
		if((c = s[l]) == ' ' || c == '\t') {
			l++;
		} else {
			break;
		}
	}
	return l;
}

int rmBackSpace(char s[], int len) {
	int l = 0;
	for(;;) {
		int c;
		if((c = s[len - 2]) == ' ' || c == '\t') {
			len--;
			l++;
		} else {
			break;
		}
	}
	return l;
}

void copy(char to[], char from[], int fOffset, int fLen) {
	int fromI = fOffset;
	int toI = 0;
	while((to[toI] = from[fromI]) != '\0' && toI < fLen - 1){
		++fromI;
		++toI;
	}
	if(to[toI] != '\0'){
		to[++toI] = '\n';
		to[++toI] = '\0';
	}
}

int isEmptyLine(char s[]) {
	int c;
	int i = 0;
	while((c = s[i++]) != '\0')
		if(c != ' ' && c != '\t' && c!='\n')
			return 0;
	return 1;
}
