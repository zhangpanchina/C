#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int i = 0, n = 100;
	srand(time(0));
	while(++i < 101) {
		if (i % 10 == 0) {
			printf("%2d \n", rand() % n);
		} else {
			printf("%2d ", rand() % n);	
		}
	}
	return 0;	
}
