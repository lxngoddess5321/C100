// 【程序98】
// 题目：从键盘输入一个字符串，将小写字母全部转换成大写字母，然后输出到一个磁盘文件“test”中保存。
//        输入的字符串以！结束。
// 1.程序分析：
// 2.程序源代码：
#include "stdio.h"
main() {
	FILE *fp;
	char str[100], filename[10];
	int i = 0;
	if ((fp = fopen("test", "w")) == NULL) {
		printf("cannot open the file\n");
		exit(0);
	}
	printf("please input a string:\n");
	gets(str);
	while (str[i] != '!') {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		fputc(str[i], fp);
		i++;
	}
	fclose(fp);
	fp = fopen("test", "r");
	fgets(str, strlen(str) + 1, fp);
	printf("%s\n", str);
	fclose(fp);
}