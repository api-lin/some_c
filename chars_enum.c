#include <stdio.h>
#include <string.h>

int main () {
	char str[] = "hello,this is a string var..";
	int len;
	
	//第1个值定义值后，往后值会递增
	enum season {
		Spring = 1, Summer, Autumn, Winter
	};
	len = strlen(str);
	printf("season:[%d],[%d]\n", Spring, Winter);
	printf("string val:[%s],length:[%d]\n", str, len);
	return 0;
}