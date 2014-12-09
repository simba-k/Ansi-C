#include <stdio.h>

void itob(int n, char s[], int b);

int main() {
	char s[23];
	itob(18, s, 3);
	printf("%s\n", s);
	return 0;
}

void itob(int n, char s[], int b) {
	int sign = n;
	int i = 0;
	while(n > 0) {
		if(sign >= 0) {
			s[i++] = n % b + '0';
		} else {
			s[i++] = -(n % b) + '0';
		}
		n = n / b;
	}
	if(sign < 0) {
		s[i++] = '-';
	}
	s[i] = '\0';
	//reverse
}
