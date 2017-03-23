#include <stdio.h>
int main () {
	FILE *fp;
	int c;
	fp = fopen("a.txt", "r");
	while ((c = getc(fp)) != EOF) {
		if (c == '\n') {
			printf("\n");
		} else {			
			printf("[%c]", c);
		}
	}
	fclose(fp);
	return 0;
}
