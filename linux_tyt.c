#include <stdio.h>
#include <time.h>
#define SZ 100
void add_zero (int num, char *str);
int main () {
	char input[SZ];
	time_t t_num;
	struct tm *tm;
	size_t ch_size = sizeof(char) * 5;
	// printf("[%s]\n", add_zero(8, input));return 0;
	// sprintf(input, "0%d", 8);
	char *ip;
	// add_zero(80, ip);
	// printf("[%s]\n", ip);

	// add_zero(5, ip);
	// printf("[%s]\n", ip);
	// return 0;

	//��һ���ڴ������
	ip = (char *)malloc(ch_size);

	while (fgets(input, SZ, stdin)) {
		//���ַ���ת��������
		t_num = atoi(input);
		
		//����ʱ�������ָ�룬��ʼ��ʱ��ṹ
		tm = localtime(&t_num);
		
		
		//С��10�����֣�����ǰ�ü�0����
		add_zero(tm->tm_sec, ip);

		printf("Timestamp:[%d]\t", t_num);
		printf("Date:[%d-%d-%d %d:%d:%d]-sss:[%s]\n",
			tm->tm_year + 1900,
			tm->tm_mon + 1,
			tm->tm_mday,
			tm->tm_hour,
			tm->tm_min,
			tm->tm_sec,
			ip
		);
	}
		free(ip);
	return 0;
}

void add_zero (int num, char *str) {
	if (num < 10) {
		sprintf(str, "0%d", num);
		//printf("[%s] a\n", str);
	} else {
		sprintf(str, "%d", num);
		//printf("[%s] b\n", str);
	}
	// str[strlen(str)] = '\0';
	*(str+strlen(str)) = '\0';
	// printf("[debug]final:[%s]\n", str);
}