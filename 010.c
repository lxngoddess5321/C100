// 【程序10】
// 题目：打印楼梯，同时在楼梯上方打印两个笑脸。
// 1.程序分析：用i控制行，j来控制列，j根据i的变化来控制输出黑方格的个数。
// 2.程序源代码：
#include "stdio.h"
main()
{
	int i, j;

	SetConsoleOutputCP(437);//输入这行代码才能正常显示128后面的ask码
	printf("\1\1\n");/*输出两个笑脸*/
	for (i = 1; i < 11; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%c%c", 219, 219);
		printf("\n");
	}
}