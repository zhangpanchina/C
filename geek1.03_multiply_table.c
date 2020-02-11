#include <stdio.h>
int main(void) {
	int row, col, target = 9;

	for(row = 1; row <= target; row++){
		for(col = 1; col <= row; col++ ){
			if (col == row) printf("%d*%d=%d\n", col, row, col*row);
			else printf("%d*%d=%d\t", col, row, col*row);
		}
	}
	return 0;
}
