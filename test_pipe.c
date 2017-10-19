#include <stdio.h>
int main (int argc, char **argv) {
	// printf("[%c]\n", stdout[0]);
	char str[100];
	int i = 1;
	size_t len;
	while (fgets(str, 80, stdin)) {
		// puts(str);
		len = strlen(str);
		//最后一位换行符去掉
		if (*(str+len-1) == '\n') {
			// printf("is-->%s\n", str);
			*(str+len-1) = '\0';
		}
		printf("%d-[%d][%c]-> %s\n", i++, len, str[len-1], str);
	}
	
	return 0;
}