// 【程序84】
// 题目：一个偶数总能表示为两个素数之和。
// 1.程序分析：
// 2.程序源代码：
#include "stdio.h"
#include "math.h"
main() {
	int a, b, c, d;
	scanf("%d", &a);
	for (b = 3; b <= a / 2; b += 2) {
		for (c = 2; c <= sqrt(b); c++)
			if (b % c == 0) break;
		if (c > sqrt(b))
			d = a - b;
		else
			break;
		for (c = 2; c <= sqrt(d); c++)
			if (d % c == 0) break;
		if (c > sqrt(d))
			printf("%d=%d+%d\n", a, b, d);
	}
}