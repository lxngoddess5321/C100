// 【程序70】
// 题目：写一个函数，求一个字符串的长度，在main函数中输入字符串，并输出其长度。
// 1.程序分析：
// 2.程序源代码：
main()
{
	int len;
	char *str[20];
	printf("please input a string:\n");
	scanf("%s", str);
	len = length(str);
	printf("the string has %d characters.", len);
}
length(p)
char *p;
{
	int n;
	n = 0;
	while (*p != '\0')
	{
		n++;
		p++;
	}
	return n;
}
