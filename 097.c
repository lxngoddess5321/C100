// 【程序97】
// 题目：从键盘输入一些字符，逐个把它们送到磁盘上去，直到输入一个#为止。
// 1.程序分析：
// 2.程序源代码：
#include "stdio.h"
main() {
	FILE *fp;
	char ch, filename[10];
	scanf("%s", filename);
	if ((fp = fopen(filename, "w")) == NULL) {
		printf("cannot open file\n");
		exit(0);
	}
	ch = getchar();
	ch = getchar();
	while (ch != '#') {
		fputc(ch, fp);
		putchar(ch);
		ch = getchar();
	}
	fclose(fp);
}