// 【程序16】
// 题目：输入两个正整数m和n，求其最大公约数和最小公倍数。
// 1.程序分析：把第一个值变成大的，第二个变成小的。利用辗除法：（1）把大的数%小的数取抹

// （2）（大的那个数没用了）把小的数赋值给大的数，把取模获得的值赋值给小的值  3：重复前面两步，直到取模的值等于零，退出循环就可以获得 公约数：最后一次被求模所得的值  公倍数：输入的两个数相乘再除以公约数

// 2.程序源代码：
main() {
  int a, b, num1, num2, temp;
  printf("please input two numbers:\n");
  scanf("%d,%d", &num1, &num2);
  if (num1 < num2) {
    temp = num1;
    num1 = num2;
    num2 = temp;
  }
  a = num1; b = num2;
  while (b != 0) {/*利用辗除法，直到b为0为止*/
    temp = a % b;
    a = b;
    b = temp;
  }
  printf("gongyueshu:%d\n", a);
  printf("gongbeishu:%d\n", num1 * num2 / a);
}