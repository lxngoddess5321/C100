// 【程序94】
// 题目：时间函数举例4,一个猜数游戏，判断一个人反应快慢。（版主初学时编的）
// 1.程序分析：
// 2.程序源代码：
#include "time.h"
#include "stdlib.h"
#include "stdio.h"
main() {
	char c;
	clock_t start, end;
	time_t a, b;
	double var;
	int i, guess;
	srand(time(NULL));
	printf("do you want to play it.('y' or 'n') \n");
loop:
	while ((c = getchar()) == 'y')
	{
		i = rand() % 100;
		printf("\nplease input number you guess:\n");
		start = clock();
		a = time(NULL);
		scanf("%d", &guess);
		while (guess != i) {
			if (guess > i)
			{	printf("please input a little smaller.\n");
				scanf("%d", &guess);
			}
			else
			{	printf("please input a little bigger.\n");
				scanf("%d", &guess);
			}
		}
		end = clock();
		b = time(NULL);
		printf("\1: It took you %6.3f seconds\n", var = (double)(end - start) / 18.2);
		printf("\1: it took you %6.3f seconds\n\n", difftime(b, a));
		if (var < 15)
			printf("\1\1 You are very clever! \1\1\n\n");
		else if (var < 25)
			printf("\1\1 you are normal! \1\1\n\n");
		else
			printf("\1\1 you are stupid! \1\1\n\n");
		printf("\1\1 Congradulations \1\1\n\n");
		printf("The number you guess is %d", i);
	}
	printf("\ndo you want to try it again?(\"y\".or.\"n\")\n");
	if ((c = getch()) == 'y')
		goto loop;
}
