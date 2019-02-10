// 【程序88】
// 题目：读取7个数（1—50）的整数值，每读取一个值，程序打印出该值个数的＊。
// 1.程序分析：
// 2.程序源代码：
main() {
	int i, a, n = 1;
	while (n <= 7) {
		do {
			scanf("%d", &a);
		} while (a < 1 || a > 50);
		for (i = 1; i <= a; i++)
			printf("*");
		printf("\n");
		n++;
	}
	getch();
}
