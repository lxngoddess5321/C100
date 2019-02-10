// 【程序76】
// 题目：编写一个函数，输入n为偶数时，调用函数求1/2+1/4+...+1/n,当输入n为奇数时，调用函数
//        1/1+1/3+...+1/n(利用指针函数)
// 1.程序分析：
// 2.程序源代码：
#include "stdio.h"
main() {
	float peven(), podd(), dcall();
	float sum;
	int n;
	while (1) {
		scanf("%d", &n);
		if (n > 1)
			break;
	}
	if (n % 2 == 0) {
		printf("Even=");
		sum = dcall(peven, n);
	}
	else {
		printf("Odd=");
		sum = dcall(podd, n);
	}
	printf("%f", sum);
}
float peven(int n)
{
	float s;
	int i;
	s = 1;
	for (i = 2; i <= n; i += 2)
		s += 1 / (float)i;
	return (s);
}
float podd(n)
int n;
{
	float s;
	int i;
	s = 0;
	for (i = 1; i <= n; i += 2)
		s += 1 / (float)i;
	return (s);
}
float dcall(fp, n)
float (*fp)();
int n;
{
	float s;
	s = (*fp)(n);
	return (s);
}
