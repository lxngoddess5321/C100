// 【程序51】
// 题目：学习使用按位与 & 。
// 1.程序分析：0&0=0; 0&1=0; 1&0=0; 1&1=1
// 2.程序源代码：
#include "stdio.h"
main() {
	int a, b;
	a = 077;
	b = a & 3;
	printf("\40: The a & b(decimal) is %d \n", b);
	b &= 7;
	printf("\40: The a & b(decimal) is %d \n", b);
}