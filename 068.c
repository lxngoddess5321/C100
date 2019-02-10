// 【程序68】
// 题目：有n个整数，使其前面各数顺序向后移m个位置，最后m个数变成最前面的m个数
// 1.程序分析：
// 2.程序源代码：
main()
{
	int number[20], n, m, i;
	printf("the total numbers is:");
	scanf("%d", &n);
	printf("back m:");
	scanf("%d", &m);
	for (i = 0; i < n - 1; i++)
		scanf("%d,", &number[i]);
	scanf("%d", &number[n - 1]);
	move(number, n, m);
	for (i = 0; i < n - 1; i++)
		printf("%d,", number[i]);
	printf("%d", number[n - 1]);
}
move(array, n, m)
int n, m, array[20];
{
	int *p, array_end;
	array_end = *(array + n - 1);
	for (p = array + n - 1; p > array; p--)
		*p = *(p - 1);
	*array = array_end;
	m--;
	if (m > 0) move(array, n, m);
}
