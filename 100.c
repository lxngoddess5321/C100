// 【程序100】
// 题目：有五个学生，每个学生有3门课的成绩，从键盘输入以上数据（包括学生号，姓名，三门课成绩），计算出
//        平均成绩，况原有的数据和计算出的平均分数存放在磁盘文件"stud"中。
// 1.程序分析：
// 2.程序源代码：
#include "stdio.h"
struct student
{
	char num[6];
	char name[8];
	int score[3];
	float avr;
} stu[5];
main() {
	int i, j, sum;
	FILE *fp;
	/*input*/
	for (i = 0; i < 5; i++) {
		printf("\n please input No. %d score:\n", i);
		printf("stuNo:");
		scanf("%s", stu[i].num);
		printf("name:");
		scanf("%s", stu[i].name);
		sum = 0;
		for (j = 0; j < 3; j++) {
			printf("score %d.", j + 1);
			scanf("%d", &stu[i].score[j]);
			sum += stu[i].score[j];
		}
		stu[i].avr = sum / 3.0;
	}
	fp = fopen("stuInfo", "w");
	for (i = 0; i < 5; i++)
		if (fwrite(&stu[i], sizeof(struct student), 1, fp) != 1)
			printf("file write error\n");
	fclose(fp);
}