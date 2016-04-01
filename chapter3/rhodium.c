/* rhodium.c -- 用金属銠衡量您的体重 */
#include <stdio.h>
int main(void)
{
	float weight;	/* 用户的体重 */
	float value;	/* 相同重量的銠的价值 */
	printf("Are you worth your weight in rhdium?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds: ");
/* 从用户处获取输入 */
	scanf("%f", &weight);
/* 假设銠为每盎司770美元 */
/* 14.5833把常衡制的英镑转换为金衡制的盎司 */
	value = 770 * weight * 14.5833;
	printf("Your weight in rhodium is worth $%.2f.\n", value);
	printf("Your are easily worth that! If rhodium prices drop, \n");
	printf("eat more to maintain your value.\n");
	return 0;
}
