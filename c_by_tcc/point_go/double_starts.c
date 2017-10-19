#include <stdio.h>

typedef int* pii;

int main () {
	int num = 100;
	pii k = &num;
	pii *pk = &k;
	int **pk2 = &k;
	printf("k:[%d]\n", *k);
	printf("pk--:[%d]\n", **pk);
	printf("pk2--:[%d]\n", **pk2);
	return 0;
}


