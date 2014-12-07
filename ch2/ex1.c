#include <stdio.h>

main() {
	char ch = 1;
	char chMin, chMax;
	while(ch++ > 0)
		;
	chMin = ch;
	chMax = --ch;
	printf("char max: %d  min: %d\n", chMax, chMin);
	unsigned char uch = 1;
	unsigned char uchMin, uchMax;
	while(++uch != 0)
		;
	uchMin = uch;
	uchMax = --uch;
	printf("unsigned char max: %d  min: %d\n", uchMax, uchMin);
	short sh = 1;
	short shMin, shMax;
	while(sh++ > 0)
		;
	shMin = sh;
	shMax = --sh;
	printf("short max: %d  min: %d\n", chMax, chMin);
	unsigned short ush = 1;
	unsigned short ushMin, ushMax;
	while(++ush != 0)
		;
	ushMin = ush;
	ushMax = --ush;
	printf("unsigned short max: %d  min: %d\n", ushMax, ushMin);
	int i = 1;
	int iMin, iMax;
	while(++i > 0)
		;
	iMin = i;
	iMax = --i;
	printf("int max: %i  min: %i\n", iMax, iMin);
	unsigned int ui = 1;
	unsigned int uiMin, uiMax;
	while(++ui != 0)
		;
	uiMin = ui;
	uiMax = --ui;
	printf("unsigned int max: %u min: %u\n", uiMax, uiMin);
	long l = 1;
	long lMin, lMax;
	while(l++ > 0)
		;
	lMin = l;
	lMax = --l;
	printf("long max: %d  min: %d\n", chMax, chMin);
	unsigned long ul = 1;
	unsigned long ulMin, ulMax;
	while(++ul != 0)
		;
	ulMin = ul;
	ulMax = --ul;
	printf("unsigned long max: %d  min: %d\n", ulMax, ulMin);
}
