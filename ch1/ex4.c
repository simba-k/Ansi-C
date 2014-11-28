#include <stdio.h>

main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("fahr -> celsius\n");
	while(fahr <= upper) {
		celsius = (5.0f/9.0f) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	celsius = 0;
	printf("celsius -> fahr\n");
	while(celsius <= upper) {
		fahr = (9.0f/5.0f * celsius) + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
