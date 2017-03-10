#include <unistd.h>

int main () {
	//如果include引入windows.h文件，则可以使用Sleep函数代替sleep
	int i = 1;
	while (1) {
		printf("[%d]-[%d]\n", i++, rand());
		sleep(1000);
	}
	return 0;
}