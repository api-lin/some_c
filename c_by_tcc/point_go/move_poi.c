#include <stdio.h>
#define ARR_SIZE 10
int main () {
	int *pi, i = 0;
	int int_arr[ARR_SIZE] = {1,2,3,4,5,6,7,8,9,10};
	int arr2[ARR_SIZE];
	pi = arr2;
	for (; i++ < ARR_SIZE; ++pi) {
		*pi = 5;
	}
	
	for (i = 0; i < ARR_SIZE; i ++) {
		printf("[%2d] ", int_arr[i]);
		printf("{%-2d} ", arr2[i]);
		printf("(%2d) ", *(pi + i));
		printf("\n");
	}
	printf("\n");
	return 0;
}