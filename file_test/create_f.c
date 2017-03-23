#include <stdio.h>
int main () {
	char c, *str;
	int i = 0;
	FILE *fp;
	
	printf("enter:\n");
	while (scanf("%c", &c)) {
		if (c == '\n') {
			break;
		}
		str[i] = c;
		i ++;
	}
	str[i] = '\0';
	
	printf("file name is :%s\n", str);
	// system("pause");
	fp = fopen(str, "a");
	fclose(fp);
	return 0;
}