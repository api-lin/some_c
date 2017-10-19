#include <stdio.h>
#include <time.h>

int (*func_p_i)(int);
int (*func_p_v)(void);

int r_1 (int);
int r_2 (void);
int another_func (int, int(*)(int));

int main () {
	func_p_i = r_1;
	func_p_v = r_2;
	
	//可通过下面两种形式传参
	int result_a = another_func(34, func_p_i);
	int result_b = another_func(56, r_1);
	
	printf("\ttime(0):[%d]\n",time(0));
	printf("\ttime(NULL):[%d]\n",time(NULL));
	printf("call another_func's result_a:[%d]\n", result_a);
	printf("call another_func's result_b:[%d]\n", result_b);
	printf("some number:[%d]\n", 1000);
	printf("number from r_1:[%d]\n", r_1(23));
	printf("number from (*func_p_i):[%d]\n", (*func_p_i)(5));
	printf("number from (*func_p_v):[%d]\n", (*func_p_v)());
}

int r_1 (int num) {
	return 100 + num;
}

int r_2 (void) {
	return 56789;
}

int another_func (int arg_num, int (*func_point)(int)) {
	int result_num = (*func_point)(arg_num);
	return result_num;
}