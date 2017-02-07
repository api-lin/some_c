#include <stdio.h>
int multi_num (int num_a, int num_b);
void my_print (int c);
void p_repeat (int times);
int main () {
	int c;
	while ( (c = getchar()) != EOF ) {
		if (c == '\n') {
			continue;
		}
		my_print(c);
		p_repeat(c - '0');
	}
	return 0;
}

//倍数相乘再加 f_num 值
int multi_num (int num_a, int num_b) {
	int f_num = 3;
	return num_a * num_b + f_num;
}

//纯输出
void my_print (int c) {
	// printf("c:[%d]\n(c-'0'):[%d]\nmulti_num(c-'0'):[%d]\nEOF:[%d]\n\n", c, c - '0', multi_num(10, c - '0'), EOF);
	printf("[hello, my_printf]\n");
	printf("c:[%d]\n", c);
	printf("c-'0':[%d]\n", c - '0');	//减48
	printf("multi_num(10, c-'0'):[%d]\n", multi_num(10, c - '0'));
	printf("EOF:[%d]\n", EOF);
	printf("\n");
}

//repeat 重复字符
void p_repeat (int times) {
	if (times == 0) {
		printf("0 times\n");
	} else {
		while (times--) {
			printf("[ok]");
		}
		printf("\n");
	}
	return 0;
}