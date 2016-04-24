/* s_and_r.c -- file including functions rand1() and srand1() */
/*              using transferred algorithm in ANSI C         */
static unsigned long int next = 1;		/* seed				  */

int rand1 (void)
{
	/* magic formula producing false random numbers */
	next = next * 1103515245 + 12345;
	return (unsigned int) (next / 65536) % 32768;
}

void srand1 (unsigned int seed)
{
	next = seed;
}