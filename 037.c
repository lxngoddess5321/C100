// 【程序37】
// 题目：对10个数进行排序
// 1.程序分析：可以利用选择法，即从后9个比较过程中，选择一个最小的与第一个元素交换，
//              下次类推，即用第二个元素与后8个进行比较，并进行交换。
// 2.程序源代码：
#include <stdio.h>

void main(void) {
//对输入的十个数进行排序
	// 方法1：选择排序法，即从后9个比较过程中，选择一个最小的与第一个元素交换，
	//         下次类推，即用第二个元素与后8个进行比较，并进行交换。

	// 方法2：冒泡法，把第一个数定义为最小的，然后和后面九个数分别做比较，如果后面的是小的，马上交换，
	//        类推，即用第二个元素与后8个进行比较，并进行交换。

	int i, j, min, tem, a[10];
	printf("please input ten num:\n");
	for (i = 0; i < 10; i++) {
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
	printf("\n");

	for (i = 0; i < 10; i++)
		printf("%5d", a[i]);

	printf("\n");

	//方法1：排序法
	// for (i = 0; i < 10; i++) {
	// 	min = i;
	// 	for (j = i + 1; j < 10; j++)
	// 		if (a[min] > a[j]) {
	// 			min = j;
	// 		}
	// 	tem = a[i];
	// 	a[i] = a[min];
	// 	a[min] = tem;
	// }

	//方法2：冒泡法
	for (i = 0; i < 10; i++) {
		for (j = i + 1; j < 10; j++)
			if (a[i] > a[j]) {
				tem = a[i];
				a[i] = a[j]; a[j] = tem;
			}
	}
	printf("After sorted \n");
	for (i = 0; i < 10; i++)printf("%5d", a[i]);
}