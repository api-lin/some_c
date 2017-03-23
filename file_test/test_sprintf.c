#include <stdio.h>
#include <time.h>
int main () {
	FILE *fp;
	int ival;
	char sval[10];
	
	int rt_len, t;
	t = time(0);
	ival = srand(t);
	rt_len = sprintf(sval, "%d", ival);
	printf("time:[%d]\n", t);
	printf("rt_len-i:[%d] rt_len-c:[%c]\n", rt_len, rt_len + '0');
	printf("int:[%d]\nstr:[%s]\n", ival, sval);
	return 0;
}