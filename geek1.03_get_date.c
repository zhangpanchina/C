#include <stdio.h>
int main() {
	int y, m, d, x;
	scanf("%d%d%d", &y, &m, &d);
	printf("%d-%d-%d\n", y, m, d);
	scanf("%d", &x);
	for (int i = 0; i < x; i++){
		d += 1;
		switch (m){
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if (d > 31) d = 1, m += 1;
				if (m == 13) m = 1, y += 1;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				if (d > 30) d = 1, m += 1;
				break;
			case 2:
				if ((y & 4 == 0 && y % 100 != 0) || y % 400 == 0){
					if (d > 29) d = 1, m += 1;
				} else if (d > 28) {
					d = 1, m += 1;
				}
				break;
			default: break;
		}
	}
	printf("%d %d %d \n", y, m, d);
	return 0;
}

