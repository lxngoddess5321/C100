// 【程序17】
// 题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
// 1.程序分析：利用while语句,条件为输入的字符不为'\n'.关键语句c=getchar();它的意思是：从电脑键盘上获取输入的字符串里的一个字符，第二次调用获取输入的字符串的下一个字符，并把它赋值到字符c中；通过不断的判断c知道整个字符串的情况；

// 每个符号都对应有具体的数值，通过每个字符的数值范围来确定每个字符的类型！

// 还有一个比较难懂的就是为什么没有通过scanf（），也能获得字符串，是因为输入的字符再回车后会出现再缓存里面而且回车字符也是会再缓存当中的，而getchar()能获得缓存里面的内容！
//
// 2.程序源代码：
#include "stdio.h"
main() {
  char c;
  int letters = 0, space = 0, digit = 0, others = 0;
  printf("please input some characters\n");
  while ((c = getchar()) != '\n') {
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
      letters++;
    else if (c == ' ')
      space++;
    else if (c >= '0' && c <= '9')
      digit++;
    else
      others++;
  }
  printf("all in all:char=%d space=%d digit=%d others=%d\n", letters, space, digit, others);
}