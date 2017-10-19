#include <stdio.h>

void add_mixed (int*, int*);
char *new_str ();
typedef struct minfo fo;
struct minfo
{
	int age;
	char *name;
	char *say;
};
fo new_fo();
fo *pnew_fo();

int main () {
	int num_a = 700;
	int num_b = 1230;
	int *p2a = &num_a, *p2b = &num_b;
	printf("num_a:[%d] num_b:[%d]\n", num_a, num_b);

	add_mixed(p2a, p2b);

	printf("after calling function add_mixed...\n");
	printf("num_a:[%d] num_b:[%d]\n", num_a, num_b);

	printf("-->[%s]\n", new_str());


	//取结构
	fo info_data = new_fo();
	printf("[%s]-->[%s]\n", info_data.name, info_data.say);

	//取指针
	fo *pinfo_data = pnew_fo();
	printf("(%s)-->(%s)\n", pinfo_data->name, pinfo_data->say);
	
	printf("Line:1"
	"Line:2"
	"Line:3\n"
	);
	
	printf("L:1 \
	L:2 \
	L:3\n"
	);

	return 0;
}

void add_mixed (int *pa, int *pb) {
	int tmp_all = *pa + *pb;
	*pa = tmp_all;
	*pb = tmp_all;
}

char *new_str () {
	return "charr";
}

fo new_fo () {
	// return struct minfo	{
	// 	10, "tom", "hello"
	// };
	fo new_fo;
	new_fo.age = 20;
	new_fo.name = "carter";
	new_fo.say = "hello";
	return new_fo;
}

fo *pnew_fo () {
	fo new_fo2 = {
		30, "tom", "hi"
	};
	fo *pnew_fo = &new_fo2;
	return pnew_fo;
}