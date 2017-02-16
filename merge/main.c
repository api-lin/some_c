#include <stdio.h>
#include "./out_h/num.h"
#include "./out_c/cnum.c"

int main () {
	p_str();
	printf("get_num:[%d]\n", get_num());
	printf("outer_num_h->[%d] outer_num_c->[%d]\n", OUTER_NUM_H, OUTER_NUM_C);
	return 0 ;
}