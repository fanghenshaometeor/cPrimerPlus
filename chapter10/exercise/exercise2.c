/* exercise2.c */
#include <stdio.h>
#include <stdlib.h>

void copy_arr (double s[], double t[], int n);
void copy_ptr (double s[], double *t, int n);
int main(void)
{
	double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[5];
	double target2[5];
	int index;

	copy_arr (source, target1, 5);
	copy_ptr (source, target2, 5);

	for (index = 0; index < 5; index++)
	{
		printf("target1[%d] = %.1lf\n", index, target1[index]);
		printf("target2[%d] = %.1lf\n", index, target2[index]);
	}
	system("pause");
	return 0;
}

void copy_arr (double s[], double t[], int n)
{
	int index;
	for (index = 0; index < n; index++)
	{
		t[index] = s[index];
	}
	return;
}

void copy_ptr (double s[], double *t, int n)
{
	int index;
	for (index = 0; index < n; index++)
	{
		*(t + index) = s[index];
	}
}