#include <stdio.h>
int check_1()
{
	printf("Well, we are wrong - part 1");
	return 0;
}

int check_2()
{
	printf("Well, we are wrong - part 2");
	return 1;
}

int
main(void)
{
	printf("Result 1: %d", 1 || check_1);
	printf("\n");
	printf("Result 2: %d", 0 && check_2);
	return 0;
}