#include <stdio.h>

/* count characters in input; 1st version */
main()
{
	long nc;

	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("The input has %ld characters\n", nc);
}
