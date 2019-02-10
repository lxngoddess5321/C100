// 【程序93】
// 题目：时间函数举例3
// 1.程序分析：
// 2.程序源代码：
/*calculate time*/
#include "time.h"
#include "stdio.h"
main() {
	clock_t start, end;
	int i;
	double var;
	start = clock();
	for (i = 0; i < 10000; i++) {
		printf("\1\1\1\1\1\1\1\1\1\1\n");
	}
	end = clock();
	printf("\1: The different is %6.3f\n", (double)(end - start));
}
