// 【程序32】
// 题目：Press any key to change color, do you want to try it. Please hurry up!
// 1.程序分析：
// 2.程序源代码：
#include <stdio.h>
#include <stdlib.h>

void main(void) {
	char a[16];
	int color;
	for (color = 0; color < 16; color++) {
		sprintf(a, "color %d", color);
		system(a);
		// textbackground(color);/*设置文本的背景颜色*/
		printf("This is color %d\r\n", color);
		cprintf("Press any key to continue\r\n");
		getch();/*输入字符看不见*/
	}
}