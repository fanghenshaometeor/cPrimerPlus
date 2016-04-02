// input.c -- 什么情况下使用
#include <stdio.h>
int main (void)
{
	int age;	// 变量
	float asserts;	// 变量
	char pet[30];	// 字符串

	printf("Enter your age, asserts, and favorite pet.\n");
	scanf("%d %f", &age, &asserts);		// 此处需要使用&
	scanf("%s", pet);			// 对char数组不需使用&
	printf("%d $%.2f %s\n", age, asserts, pet);

	return 0;
}

