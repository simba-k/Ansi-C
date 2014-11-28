#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX_SIZE 100

main() {
	int c, state;
	int bs = 0; //biggest size
	int ba = 0; //biggest amount
	int dat[MAX_SIZE];
	int cs = 0; //current word size
	for(int i = 0; i < MAX_SIZE; i++) {
		dat[i] = 0;
	}
	while((c = getchar()) != EOF) {
		if(c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			if(cs != 0 && cs < MAX_SIZE) {
				if(cs > bs)
					bs = cs;
				dat[cs]++;
				if(dat[cs] > ba)
					ba = dat[cs];
			}
			cs = 0;
		}else{
			state = IN;
			cs++;
		}
	}
	for(int i = ba; i > 0; i--) {
		putchar('\n');
		for(int ii = 1; ii <= bs; ii++) {
			if(dat[ii] == i) {
				putchar('|');
				dat[ii]--;
			}else{
				putchar(' ');
			}
		}
	}
	putchar('\n');
	for(int i = 0; i < bs; i++) {
		putchar('-');
	}
	putchar('\n');
}
