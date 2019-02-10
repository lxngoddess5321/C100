// 【程序26】
// 题目：利用递归方法求5!。
// 1.程序分析：递归公式：fn=fn_1*4!
// 2.程序源代码：
#include "stdio.h"
main()
{
	int i;
	int fact();
	for (i = 0; i < 5; i++)
		printf("\40:%d!=%d\n", i, fact(i));
}
int fact(j)
int j;
{
	int sum;
	if (j == 0)
		sum = 1;
	else
		sum = j * fact(j - 1);
	return sum;
}