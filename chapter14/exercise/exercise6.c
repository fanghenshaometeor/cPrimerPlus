/* exercise6.c */
#include <stdio.h>
#include <stdlib.h>
#define NAMELENGTH 20
#define SOCMANID 19

struct soccerman {
	char lname[NAMELENGTH];
	char fname[NAMELENGTH];
	int state;
	int shot;
	int walk;
	int run;
	float aversuc;
};

void readfile(FILE *, struct soccerman *);

int main (void)
{
	struct soccerman sample[SOCMANID];
	FILE *fp;

	if ((fp = fopen("text.txt", "rb")) == NULL)
	{
		fprintf(stderr, "Can't open file text.\n");
		exit(1);
	}

	system("pause");
	return 0;
}

void readfile(FILE *fp, struct soccerman *pst)
{
	int id, statetemp, shottemp, walktemp, runtemp;

}