#include <stdio.h>
#include <time.h>
int main () {
	FILE *fp;
	int n = 10;
	char *file_name = "a.txt", *str;
	time_t t;
	
	int ival = 123456;
	char sval[7];
	
	sprintf(sval, "%d" ,ival);
	printf("i:[%d] s:[%s]\n", ival, sval);
	return 0 ;
	
	fp = fopen(file_name, "a");
	while (n--) {
		t = time(0);
		printf("[%d]\n", t);
		fputs("haha\n", fp);
		sleep(1000);
	}
	// printf("\n");
	fclose(fp);
	
	return 0;
}
