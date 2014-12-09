#include <stdio.h>

int binsearch(int x, int v[], int n);

int main() {
	int dat[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	for(int i = 0; i <= 11; i++) {
		printf("%d\n", binsearch(i, dat, 10));
	}
	return 0;
}

int binsearch(int x, int v[], int n) {
	int low, high, mid;
	low = 0;
	high = n - 1;
	mid = (low + high) / 2;
	while(low != mid) {
		if (x >= v[mid]) {
			low = mid;
		} else {
			high = mid;
		}
		mid = (low + high) / 2;
	}
	if(v[low] == x) {
		return low;
	}else if(v[high] == x){
		return high;
	}else{
		return -1;
	}
}
