#include <stdio.h>
void pr_var (char *str);
void pr_var2 (char *str);

int main (int argc, char **argv) {
	// pr_var("haha");
	// pr_var2();
	pr_var2(*++argv);
	return 0;
}

void pr_var (char *str) {
	static char *base_str = "hello";
	strcpy(base_str, str);
	printf("[%s]\n", base_str);
}

void pr_var2 (char *str) {
	static char c = ' ';
	printf("c:[%c-->%s]\n", c, str);
	c = 'q';
}