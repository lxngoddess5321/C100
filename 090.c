// 【程序90】
// 题目：专升本一题，读结果。
// 1.程序分析：
// 2.程序源代码：
#include "stdio.h"
#define M 5
main() {
	int a[M] = {1, 2, 3, 4, 5};
	int i, j, t;
	i = 0; j = M - 1;
	while (i < j) {
		t = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = t;
		i++; j--;
	}
	for (i = 0; i < M; i++)
		printf("%d", *(a + i));
}
