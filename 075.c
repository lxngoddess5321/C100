// 【程序75】
// 题目：放松一下，算一道简单的题目。
// 1.程序分析：
// 2.程序源代码：
main() {
   int i, n;
   for (i = 1; i < 5; i++) {
      n = 0;
      if (i != 1)
         n = n + 1;
      if (i == 3)
         n = n + 1;
      if (i == 4)
         n = n + 1;
      if (i != 4)
         n = n + 1;
      if (n == 3)
         printf("zhu hao shi de shi:%c", 64 + i);
   }
}