/* exercise5.c */
#include <stdio.h>
#include <stdlib.h>
#define NAMELENGTH 20
#define CSIZE 4

struct name {
	char lname[NAMELENGTH];
	char fname[NAMELENGTH];
};

struct student {
	struct name student_name;
	float grade[3];
	float aver;
};

void getinput(struct student *);
void compaver(struct student *);
void oinfo(const struct student[]);
void oaver(const struct student[]);
void clear(void);

int main(void)
{
	struct student stuarray[CSIZE] = {
		{ { "fuck", "fuck" },{ 0, 0, 0 }, 0 },
		{ { "fuck", "fuck" },{ 0, 0, 0 }, 0 },
		{ { "fuck", "fuck" },{ 0, 0, 0 }, 0 },
		{ { "fuck", "fuck" },{ 0, 0, 0 }, 0 }
	};

	getinput(&stuarray[0]);
	compaver(&stuarray[0]);
	oinfo(stuarray);
	oaver(stuarray);

	system("pause");
	return 0;
}

void getinput(struct student *stupoint)
{
	int index = 0;

	for (; index < CSIZE; index++)
	{
		printf("Please enter student %d 's first name.\n", index + 1);
		gets_s(stupoint->student_name.fname, NAMELENGTH);
		printf("Please enter student %d 's last name.\n", index + 1);
		gets_s(stupoint->student_name.lname, NAMELENGTH);
		printf("Please enter student %d 's first grade.\n", index + 1);
		scanf_s("%f", &(stupoint->grade[0]));
		printf("Please enter student %d 's second grade.\n", index + 1);
		scanf_s("%f", &(stupoint->grade[1]));
		printf("Please enter student %d 's third grade.\n", index + 1);
		scanf_s("%f", &(stupoint->grade[2]));
		clear();

		stupoint++;
	}
}

void compaver(struct student * stupoint)
{
	int index = 0, i = 0;
	float total = 0;

	for (; index < CSIZE; index++, stupoint++)
	{
		for (i = 0, total = 0; i < 3; i++)
			total += stupoint->grade[i];
		stupoint->aver = total / 3;
	}
}

void oinfo(const struct student stuarr[])
{
	int index = 0;

	for (; index < CSIZE; index++)
	{
		printf("Student %d:\n", index+1);
		printf("	name: %s %s\n", stuarr[index].student_name.fname, stuarr[index].student_name.lname);
		printf("	grades: %-.2f, %-.2f, %-.2f\n", stuarr[index].grade[0], stuarr[index].grade[1], stuarr[index].grade[2]);
		printf("	average grades: %-.2f\n", stuarr[index].aver);
	}
}

void oaver(const struct student stuarr[])
{
	int index = 0, i = 0;
	float gradeaver[3] = { 0,0,0 };

	for (i = 0; i < 3; i++)
	{
		for (index = 0; index < CSIZE; index++)
			gradeaver[i] += stuarr[index].grade[i];
		gradeaver[i] = gradeaver[i] / CSIZE;
	}

	printf("--------------------------------------------------\n");
	printf("The first average grades of the class is %-.2f.\n", gradeaver[0]);
	printf("The second average grades of the class is %-.2f.\n", gradeaver[1]);
	printf("The third average grades of the class is %-.2f.\n", gradeaver[2]);

}

void clear(void)
{
	while (getchar() != '\n')
		continue;
}