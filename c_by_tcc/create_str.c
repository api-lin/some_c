#include <stdio.h>
void prr (int t);
void rep (int t);
char *re_str(int t);
char *cre_str(int t, char *str);
int main (int argc, char *argv[]) {
	// printf("[%s]\n", argv[1]);
	int times;

	//������ַ���ת��������
	sscanf(argv[1], "%d", &times);
	// printf("[%d]\n", times);
	// prr(times);
	
	//������������֣�����ӡ�ַ����Ĵ���
	// rep(times);
	char *new_s;
	new_s = re_str(times);
	printf("str-from-func:[%s]\n",new_s);
	
	if (argv[2] != NULL) {
		char *create_str = cre_str(times, argv[2]);
		printf("create_str:[%s]\n", create_str);
		printf("argv[2]:[%s]\n", argv[2]);
	}
}

void prr (int t) {
	int i;
	for (i = 0; i < t; i++) {
		printf("[%d]\n", i);
	}
}

//���ݴ���Ĳ���t����ӡ�ظ�t��"ok"�ַ���
void rep (int t) {
	char *base_char = "ok";
	char *str;
	int i = 0;
	
	//����洢�ַ�������ռ�
	size_t str_size = strlen(base_char) * t;
	str = (char *)malloc(str_size + 1);
	strcpy(str, base_char);
	printf("tmp:[%s]\n", str);
	// return ;
	for (; i < t; i++) {
		strcat(str, base_char);
	}
	str[str_size] = '\0';
	printf("rst:[%s]\n", str);
	// free(str);
}

//���ݴ���Ĳ���t�������ظ�t��"(new)"�ַ���
char *re_str (int t) {
	char *base_char = "(new)";
	char *new_str;
	size_t str_size = strlen(base_char) * t;
	
	new_str = (char *)malloc(str_size + 1);
	strcpy(new_str, base_char);
	while (t--) {
		strcat(new_str, base_char);
	}
	new_str[str_size] = '\0';
	return new_str;
}

//���ݴ���Ĳ���t�Ͳ���input_str�� �����ظ�t�ε�input_str�ַ���
char *cre_str (int t, char *input_str) {
	char *str;
	size_t str_size = strlen(input_str) * t;
	str = (char *)malloc(str_size + 1);
	
	//��ʼ���ַ�����ʹ֮����input_str
	strcpy(str, input_str);
	t--;
	
	//����
	// t++;
	// t++;

	while (t--) {
		strcat(str, input_str);
	}
	str[str_size] = '\0';
	return str;
}



