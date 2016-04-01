/* exercise6.c -- This program aims to 
	accept how many 夸脱 of water and then display how many water molecules in it */
#include <stdio.h>
int main (void)
{
	float watmc_mass = 3.0e-23;	// 一个水分子质量3.0e-23g
	int watkt_mass = 950;		// 一夸脱水大约950g
	float water;			// 定义输入的水量

	printf("请输入水量：________夸脱\b\b\b\b\b\b\b\b\b\b\b\b");
	scanf("%f", &water);
	printf("%f夸脱水中含有%e个水分子\n", water, water * watkt_mass / watmc_mass);

	return 0;
}

