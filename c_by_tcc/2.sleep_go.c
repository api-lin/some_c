#include <unistd.h>

int main () {
	//���include����windows.h�ļ��������ʹ��Sleep��������sleep
	int i = 1;
	while (1) {
		printf("[%d]-[%d]\n", i++, rand());
		sleep(1000);
	}
	return 0;
}