// 【程序12】
// 题目：判断101-200之间有多少个素数，并输出所有素数。
// 1.程序分析：判断素数的方法：用一个数分别去除2到sqrt(这个数的平方根)，如果能被整除，
//              则表明此数不是素数，反之是素数。素数就是质数！
// 2.程序源代码：
#include "math.h"
main() {
  int m, i, k, sum = 0, leap = 1;
  printf("\n");
  for (m = 101; m <= 200; m++) {
    k = sqrt(m + 1);
    for (i = 2; i <= k; i++) {
      if (m % i == 0) {
        leap = 0;
        break;
      }
    }
    //如果是素数的话就打印出来
    if (leap) {
      printf("%-4d", m); sum++;
      if (sum % 10 == 0)
        printf("\n");
    }
    leap = 1;
  }
  printf("\nThe total is %d", sum);
}