// 【程序56】
// 题目：画图，学用circle画圆形。
// 1.程序分析：
// 2.程序源代码：
/*circle*/
#include "graphics.h"
main() {
	int driver, mode, i;
	float j = 1, k = 1;
	driver = VGA; mode = VGAHI;
	initgraph(&driver, &mode, "");
	setbkcolor(YELLOW);
	for (i = 0; i <= 25; i++) {
		setcolor(8);
		circle(310, 250, k);
		k = k + j;
		j = j + 0.3;
	}
}
