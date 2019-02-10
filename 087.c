// 【程序87】
// 题目：回答结果（结构体变量传递）
// 1.程序分析：
// 2.程序源代码：
#include "stdio.h"
struct student
{
	int x;
	char c;
} a;
main()
{
	a.x = 3;
	a.c = 'a';
	f(a);
	printf("%d,%c", a.x, a.c);
}
f(struct student b)
{
	b.x = 20;
	b.c = 'y';
}
