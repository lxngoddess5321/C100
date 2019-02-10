// 【程序27】
// 题目：利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
// 1.程序分析：
// 2.程序源代码：
#include"stdio.h"

main() {
	int i = 6;
	void palin(int n);
	printf("请输入6位字符串:");
	palin(i);
	printf("\n");
}

void palin(int n) {
	char next;
	if (n <= 1) {
		next = getchar();
		printf("\n顺序置换后的字符为：");
		putchar(next);
	} else {
		next = getchar();
		palin(n - 1);
		putchar(next);
	}
}