// 【程序47】
// 题目：宏#define命令练习(2)
// 1.程序分析：
// 2.程序源代码：
#include "stdio.h"
/*宏定义中允许包含两道衣裳命令的情形，此时必须在最右边加上"\"*/
#define exchange(a,b) { \
int t; \
t = a; \
a = b; \
b = t; \
}

void main(void) {
	int x = 10;
	int y = 20;
	printf("x=%d; y=%d\n", x, y);
	exchange(x, y);
	printf("x=%d; y=%d\n", x, y);
}