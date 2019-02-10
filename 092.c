// 【程序92】
// 题目：时间函数举例2
// 1.程序分析：
// 2.程序源代码：
/*calculate time*/
#include "time.h"
#include "stdio.h"
main()
{
	time_t start, end;
	int i;
	start = time(NULL);
	for (i = 0; i < 3000; i++) {
		printf("\1\1\1\1\1\1\1\1\1\1\n");
	}
	end = time(NULL);
	printf("\1: The different is %6.3f\n", difftime(end, start));
}
