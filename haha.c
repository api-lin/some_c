#include <stdio.h>
main () {
	int i = 1,j;
	while (i <= 9) {
		j = 1;
		while (j <= i) {
			printf("[%d*%d=%2d] ", j, i, j * i);
			j++;
		}
		printf("\n");
		i++;
	}
	//printf("haha----code::blocks\n");
}

