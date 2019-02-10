//  【程序31】
// 题目：请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续
//        判断第二个字母。
// 1.程序分析：用情况语句比较好，如果第一个字母一样，则判断用情况语句或if语句判断第二个字母。
// 2.程序源代码：
#include <stdio.h>
void main() {
  char letter;
  printf("please input the first letter of someday\n");
  while ((letter = getch()) != 'Y') { /*当所按字母为Y时才结束*/
    switch (letter) {
    case 'S':
      printf("please input second letter\n");
      if ((letter = getch()) == 'a')
        printf("saturday\n");
      else if ((letter = getch()) == 'u')
        printf("sunday\n");
      else
        printf("data error\n");
      break;
    case 'F':
      printf("friday\n"); break;
    case 'M':
      printf("monday\n"); break;
    case 'T':
      printf("please input second letter\n");
      if ((letter = getch()) == 'u')
        printf("tuesday\n");
      else if ((letter = getch()) == 'h')
        printf("thursday\n");
      else printf("data error\n");
      break;
    case 'W': printf("wednesday\n"); break;
    default: printf("data error\n");
    }
  }
}