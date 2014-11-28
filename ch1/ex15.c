#include <stdio.h>

float ftoc(int fahr){
	return (5.0f/9.0f) * (fahr - 32.0);
}

main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("fahr -> celsius\n");
	for(fahr = lower; fahr <= upper; fahr += step) {
		celsius = ftoc(fahr);
		printf("%3.0f %6.1f\n", fahr, celsius);
	}
}
