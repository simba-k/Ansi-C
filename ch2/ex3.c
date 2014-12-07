#include <stdio.h>

int htoi(char s[]);

int main() {
	printf("%x\n", htoi("0xc3ff"));
	return 0;
}

int htoi(char s[]) {
	int max = sizeof(int);
	int first0 = 0;
	int c;
	int place = 0;
	if(s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
		place = 2;
	}
	int value = 0;
	for(int i = 0; i < max; i++) {
		c = s[place];
		int val;
		if(c >= '0' && c <= '9') {
			val = c - '0';
		} else if(c >= 'a' && c <= 'f') {
			val = (c - 'a') + 10;
		} else if(c >= 'A' && c <= 'F') {
			val = (c - 'A') + 10;
		}else{
			fprintf(stderr, "Incorrect input");
			return -1;
		}

		for(int ii = max - i; ii > 1; ii--) {
			val *= 16;
		}
		value += val;
		place++;
	}
	return value;
}
