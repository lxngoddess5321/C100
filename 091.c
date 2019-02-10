// 【程序91】
// 题目：时间函数举例1
// 1.程序分析：
// 2.程序源代码：
#include "stdio.h"
#include "time.h"
void main() {
	time_t rawtime; /*define a longint time varible*/
	rawtime = time(NULL); /*system time and date*/

	// time(&rawtime);
	printf(ctime(&rawtime));/*english format output*/
	printf(asctime(localtime(&rawtime))); /*tranfer to tm*/
	printf(asctime(gmtime(&rawtime))); /*tranfer to Greenwich time*/
}