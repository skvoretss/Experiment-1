#include <stdio.h>
#include <time.h>
int
main(void)
{
	int i, k, t;
	for (i = 0; i < 100000000; i++)
	{
		k = 1 || 0;
	}
	t = clock(); 
	printf("Time in short process = %f", ((float)t) / CLOCKS_PER_SEC);
	return 0;
}