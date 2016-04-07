/* exercise11.c */
#include <stdio.h>
float polygon1 (int n1);
float polygon2 (int n2);
int main (void)
{
	int input_time;
	const int TIME1 = 20;
	const int TIME2 = 100;
	const int TIME3 = 500;

	printf("We compute the two polygons:\nPolygon1: 1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...\n");
	printf("Polygon2: 1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...\n");
	printf("When the time equals 20, 100, 500, the results are as follows:\n");
	printf("time = %d, polygon1 = %f, polygon2 = %f;\n", TIME1, polygon1(TIME1), polygon2(TIME1));
	printf("time = %d, polygon1 = %f, polygon2 = %f;\n", TIME2, polygon1(TIME2), polygon2(TIME2));
	printf("time = %d, polygon1 = %f, polygon2 = %f.\n", TIME3, polygon1(TIME3), polygon2(TIME3));
	printf("Enter the time you want: ");
	scanf("%d", &input_time);
	printf("time = %d, polygon1 = %f, polygon2 = %f.\n", input_time,
		polygon1(input_time), polygon2(input_time));
	return 0;
}

float polygon1 (int n1)
{
	int index = 1;
	float sum = 0.0, start = 1.0;
	float term;
	for (; index <= n1; index++, start += 1.0)
	{
		term = 1.0 / start;
		sum += term;
	}
	return sum;
}

float polygon2 (int n2)
{
	int index2 = 1;
	float sum2 = 0.0, start2 = 1.0, minusone = -1.0;
	float term2;
	for (; index2 <= n2; index2++, start2 += 1.0)
	{
		if (index2 % 2 == 1)
			minusone = 1.0;
		else
			minusone = -1.0; 
		term2 = minusone  * 1.0 / start2;
		sum2 += term2;
	}
	return sum2;
}

