// 【程序71】
// 题目：编写input()和output()函数输入，输出5个学生的数据记录。
// 1.程序分析：
// 2.程序源代码：
#define N 5
struct student
{
  char num[6];
  char name[8];
  int score[4];
} stu[N];
input(stu)
struct student stu[];
{
  int i, j;
  for (i = 0; i < N; i++) {
    printf("\n please input %d of %d\n", i + 1, N);
    printf("num: ");
    scanf("%s", stu[i].num);
    printf("name: ");
    scanf("%s", stu[i].name);
    for (j = 0; j < 3; j++) {
      printf("score %d.", j + 1);
      scanf("%d", &stu[i].score[j]);
    }
    printf("\n");
  }
}
print(stu)
struct student stu[];
{
  int i, j;
  printf("\nNo. Name Sco1 Sco2 Sco3\n");
  for (i = 0; i < N; i++) {
    printf("%-6s%-10s", stu[i].num, stu[i].name);
    for (j = 0; j < 3; j++)
      printf("%-8d", stu[i].score[j]);
    printf("\n");
  }
}
main() {
  input(stu);
  print(stu);
}
