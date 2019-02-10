// 【程序39】
// 题目：有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。
// 1. 程序分析：首先判断此数是否大于最后一个数，然后再考虑插入中间的数的情况，插入后
//            此元素之后的数，依次后移一个位置。
// 2.程序源代码：
#include <stdio.h>

void main(void) {
	int a[10] = {1, 4, 9, 13, 16, 19, 28, 60, 98};
	int i, j;
	int temp1, temp2;
	int number;
	printf("请输入一个整数：");
	scanf("%d", &number);
	if (number > a[8]) { //比第九个大就是最大的一个了
		a[9] = number;
	} else {//否则从前面一个个比较
		for (i = 0; i < 10; i++) {
			if (a[i] > number) { //直到遇到一个比输入大的数
				temp1 = a[i];
				a[i] = number; //就插到它前面
				for (j = i + 1; j < 10; j++) { //后面的数依次往后退一位
					temp2 = a[j];
					a[j] = temp1;
					temp1 = temp2;
				}
				break;
				//此处的跳出很重要
				//没有的话a[i]后面的数都会变成number
				//这里有一个疑问，break直接跳出了外面的for循环，跳过了if?
				//恩！这里的break不能写到下面一个嵌套，
				//因为可能会发生没有通过一次if就会被break了，和预期结果不符
			}
		}
	}
	//打印整个数组出来
	printf("排列后的数组：");
	for (i = 0; i < 10; i++) {
		printf("%d  ", a[i]);
	}
	printf("\n");
}