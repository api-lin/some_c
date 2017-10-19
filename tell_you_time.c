#include <stdio.h>
#include <time.h>
#define SIZE 100
int main () {
	char input[SIZE];
	struct tm *tm;
	time_t time_num;
	
	fgets(input, SIZE, stdin);
	time_num = atoi(input);
	
	//gmtime是格林尼治时间，比本地时间少8小时（东八区）
	// tm = gmtime(&time_num);
	
	//使用本地时间
	tm = localtime(&time_num);
	printf("Date:[%d-%d-%d %d:%d:%d]\n", tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday, tm->tm_hour, tm->tm_min, tm->tm_sec);
	// printf("H:i:s:[]\n");
	return 0;
}