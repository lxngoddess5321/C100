// 【程序9】
// 题目：要求输出国际象棋棋盘。
// 1.程序分析：用i控制行，j来控制列，根据i+j的和的变化来控制输出黑方格，还是白方格。
// 2.程序源代码：
#include "stdio.h"
main()
{
	int i, j;

	SetConsoleOutputCP(437);//输入这行代码才能正常显示128后面的ask码
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++)
			if ((i + j) % 2 == 0)
				printf("%c%c", 219, 219);
			else
				printf(" ");
		printf("\n");
	}
}