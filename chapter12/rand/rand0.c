/* rand0.c -- produce random number */
/* use transferred algorithm in ANSI C */
static unsigned long int next = 1;				/* seed */

int rand0 (void)
{
	/* magic formula producing false random numbers */
	next = next * 1103515245 + 12345;
	return (unsigned int) (next / 65536) % 32768;
}