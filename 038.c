// 【程序38】
// 题目：求一个3*3矩阵对角线元素之和
// 1.程序分析：利用双重for循环控制输入二维数组，再将a[i][i]累加后输出。
// 2.程序源代码：
main() {
	float a[3][3], sum = 0;
	int i, j;
	printf("please input rectangle element:\n");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf("%f", &a[i][j]);
	for (i = 0; i < 3; i++)
		sum = sum + a[i][i];
	printf("duijiaoxian he is %6.2f", sum);
}