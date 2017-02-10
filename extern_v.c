#include <stdio.h>

#define BIG_NUM 1000

char str[BIG_NUM];
void set_str (void);

int main () {
	extern char str[];
	set_str();
	printf("str:[%s]\n", str);
	return 0;
	
}

void set_str () {
	extern char str[];
	int i;
	char c;
	for (i = 0; i < 5; ++i) {
		str[i] = i + '0';
		printf("i:[%d] str-int:[i]:[%d] str-char:[%c]\n", i, str[i], str[i]);
	}
	str[i] = '\0';
}