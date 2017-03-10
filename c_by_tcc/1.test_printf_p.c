#include <stdio.h>

int main () {
	int num = 10, *p = &num;
	char str[] = "string", *pc = str;
	printf("[%d]\n", *p);
	printf("[%p]\n", *p);
	printf("[%p]\n", *pc);
	return 0;
}
