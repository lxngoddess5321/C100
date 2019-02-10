// 【程序40】
// 题目：将一个数组逆序输出。
// 1.程序分析：用第一个与最后一个交换。
// 2.程序源代码：

#include <stdio.h>

void main(void) {
	int num = 0;
	int a[5];
	int temp, i;
	printf("请输入5为的数组:");
	for (i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
	}
	//交换数组位置的核心代码
	for (i = 0; i < 5 / 2; i++) {
		temp = a[i];
		a[i] = a[5 - i - 1];
		a[5 - i - 1] = temp;
	}
	for (num = 0; num < 5; num++) {
		printf("%d ", a[num]);
	}
	printf("\n");
}