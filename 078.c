// 【程序78】
// 题目：找到年龄最大的人，并输出。请找出程序中有什么问题。
// 1.程序分析：
// 2.程序源代码：
#define N 4
#include "stdio.h"
static struct man
{
	char name[20];
	int age;
} person[N] = {"li", 18, "wang", 19, "zhang", 20, "sun", 22};
main() {
	struct man *q, *p;
	int i, m = 0;
	p = person;
	for (i = 0; i < N; i++) {
		if (m < p->age)
			q = p++;
		m = q->age;
	}
	printf("%s,%d", (*q).name, (*q).age);
}