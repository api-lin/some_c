#include <stdio.h>
main () {
	int g, i = 1, j;
	int str[10];
	while ((g = getchar()) != EOF) {
		putchar(g);
		str[i] = g;
		i++;
		if (g == 'o') {
			break;
		}
		// for (j = 0; j < 10; j++) {
			// printf("[%d]", str[i]);
		// }
	}
}