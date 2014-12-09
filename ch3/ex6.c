#include <stdio.h>
//TODO reverse
void itoa(char n, char s[], int p);

int main() {
	char s[10];
	itoa(0, s, 5);
	printf("%s\n", s);
	return 0;
}

void itoa(char n, char s[], int p) {
	char i, sign;
	sign = n;

	i = 0;

	int ncpy = n;
	int places = 0;
	if(ncpy < 0) {
		places++;
	};
	int div = 1;
	do {
		ncpy /= div;
		places++;
		div *= 10;
	} while(ncpy != 0);
	int padding = p - places;
	do {
		if(sign > 0) {
		s[i++] = n % 10 + '0';
		} else {
			s[i++] = -(n % 10) + '0';
		}
	} while ((n /= 10) > 0 || n < 0);

	if (sign < 0)
		s[i++] = '-';
	while((padding--) > 0) {
		s[i++] = ' ';
	}
	s[i] = '\0';
	//reverse
}
