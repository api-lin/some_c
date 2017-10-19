#include <ctype.h>
#include <stdio.h>

void test_ctype(void);

int get_i(void);
int get_dbl(int);

int get_num(int);
int get_num2(int);
int call_func(int, int (*)(int));

int main () {
	int (*pg)(void) = &get_i;
	int (*pg2)(int) = &get_dbl;

	printf("pg():[%d]\n", pg());
	printf("pg2():[%d]\n", pg2(21));

	int (*pg3)(int) = &get_num;
	int (*pg4)(int) = &get_num2;
	
	printf("call_func:[%d]\n", call_func(10, pg4));
	printf("call_func:[%d]\n", call_func(10, get_num2));
	
	// test_ctype();
	return 0;
}

int get_i (void) {
	return 200;
}

int get_dbl (int num) {
	return num * 2;
}

int get_num (int num) {
	return num * 10;
}

int get_num2 (int num) {
	return num * 100;
}

int call_func (int num, int (*func)(int) ) {
	return func(num) + 1000;
}


void test_ctype () {

	int unknow_type_value = 5;
	char unknow_type_value2 = '5';
	int flag = isalnum(unknow_type_value);
	int flag2 = isalnum(unknow_type_value2);

	int flag_digit = isdigit(unknow_type_value);
	int flag_digit2 = isdigit(unknow_type_value2);
	
	int flag_abc = isalpha(unknow_type_value);
	int flag_abc2 = isalpha(unknow_type_value2);

	printf("f:[%d]-[%c]\n", flag, flag);
	printf("f2:[%d]-[%c]\n", flag2, flag2);

	printf("flag_digit:[%d]-[%c]\n", flag_digit, flag_digit);
	printf("flag_digit2:[%d]-[%c]\n", flag_digit2, flag_digit2);
	
	printf("flag_abc:[%d]-[%c]\n", flag_abc, flag_abc);
	printf("flag_abc2:[%d]-[%c]\n", flag_abc2, flag_abc2);
	// printf("NULL:[%d] TRUE:[%d]\n", NULL, 100);
}