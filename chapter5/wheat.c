/* wheat.c -- 指数增长 */
#include <stdio.h>
#define SQUARES 64	/* 棋盘上的方格数 */
#define CROP 1E15	/* 以粒计的小麦产量 */

int main (void)
{
	double current, total;
	int count = 1;

	printf("square    grains     total    ");
	printf("fraction of \n");
	printf("          added      grains   ");
	printf("US total\n");

	total = current = 1.0;	/* 开始时一粒 */
	printf("%2d %15.2e %6.2e %8e\n", count, current, total, total/CROP); 

	while (count < SQUARES)
	{
		count = count + 1;
		current = 2.0 * current;	/* 下个方格的粒数加倍 */
		total = total + current;	/* 更新总数 */
		printf("%2d %15.2e %6.2e %8e\n", count, current, total, total/CROP);
	}
	printf("That's all.\n");

	return 0;
}

