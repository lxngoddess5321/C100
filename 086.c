// 【程序86】
// 题目：两个字符串连接程序
// 1.程序分析：
// 2.程序源代码：
#include "stdio.h"
main() {
	char a[] = "acegikm";
	char b[] = "bdfhjlnpq";
	char c[80], *p;
	int i = 0, j = 0, k = 0;
	while (a[i] != '\0' && b[j] != '\0') {
		if (a[i] < b[j]) {
			c[k] = a[i]; i++;
		}
		else
			c[k] = b[j++];
		k++;
	}
	c[k] = '\0';
	if (a[i] == '\0')
		p = b + j;
	else
		p = a + i;
	strcat(c, p);
	puts(c);
}
