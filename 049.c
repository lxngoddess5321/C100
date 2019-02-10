// 【程序49】
// 题目：#if #ifdef和#ifndef的综合应用。
// 1. 程序分析：
// 2.程序源代码：
#include "stdio.h"
#define MAX
#define MAXIMUM(x,y) (x>y)?x:y
#define MINIMUM(x,y) (x>y)?y:x
void main() {
	int a = 10, b = 20;
#ifdef MAX
	printf("\40: The larger one is %d\n", MAXIMUM(a, b));
#else
	printf("\40: The lower one is %d\n", MINIMUM(a, b));
#endif
#ifndef MIN
	printf("\40: The lower one is %d\n", MINIMUM(a, b));
#else
	printf("\40: The larger one is %d\n", MAXIMUM(a, b));
#endif
#undef MAX
#ifdef MAX
	printf("\40: The larger one is %d\n", MAXIMUM(a, b));
#else
	printf("\40: The lower one is %d\n", MINIMUM(a, b));
#endif
#define MIN
#ifndef MIN
	printf("\40: The lower one is %d\n", MINIMUM(a, b));
#else
	printf("\40: The larger one is %d\n", MAXIMUM(a, b));
#endif
}
