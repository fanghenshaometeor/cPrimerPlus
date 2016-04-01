/* exercise1.c -- This program aims to discern
	how the system treat the problem that integer and float point number 上溢
	and the float point number 下溢 */
#include <stdio.h>
int main (void)
{
	int i_upover = 1234567891011;
	float f_upover = 123456789.987654321;
	float f_downover = -123456789.987654321;

	printf("整数上溢：i=%d, i+1=%d, i+2=%d.\n", i_upover, i_upover+1, i_upover+2);
	printf("浮点数上溢：f1=%f, f1+1=%f, f1+2=%f.\n", f_upover, f_upover+1, f_upover+2);
	printf("浮点数下溢：f2=%f, f2-1=%f, f2-2=%f.\n", f_downover, f_downover-1, f_downover-2);

	return 0;
}

