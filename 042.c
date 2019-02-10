// 【程序42】
// 题目：学习使用auto定义变量的用法
// 1.程序分析：
// 2.程序源代码：
#include "stdio.h"
main() {
	int i, num;
	num = 2;
	for (i = 0; i < 3; i++) {
		printf("\40: The num equal %d \n", num);
		num++;
		{
			auto int num = 1;
			printf("\40: The internal block num equal %d \n", num);
			num++;
		}
	}
}