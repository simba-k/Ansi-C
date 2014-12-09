#include <stdio.h>
//TODO reverse
void itoa(char n, char s[]);

int main() {
	char s[5];
	itoa(127, s);
	printf("%s\n", s);
	return 0;
}

void itoa(char n, char s[]) {
	char i, sign;
	sign = n;

	i = 0;
	do {
		if(sign > 0) {
		s[i++] = n % 10 + '0';
		} else {
			s[i++] = -(n % 10) + '0';
		}
	} while ((n /= 10) > 0 || n < 0);

	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	//reverse
}
