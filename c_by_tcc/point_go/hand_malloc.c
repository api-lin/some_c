#include <stdio.h>
int main () {
	char *str;
	str = (char *)malloc(10000000000000000);
	// if (!str) {
	if (str == NULL) {
		printf("str is NULL~ not enough zone...\n");
	} else {
		printf("str is enough~ yes.\n");
	}
	// printf("stop...\n");
	system("pause");
	free(str);
	return 0;
}