#include <stdio.h>
union bi
{
	  double b;
	  unsigned long long int a;
};

int bitprinter_1(union bi K)
{
	  printf("\n");
	  printf("%lf", K.b);
    printf("\n");
 	  unsigned long long int mask = (unsigned long long int)1 << 63;
    while (mask != 0)
	  {
        printf("%d", (K.a & mask) == 0 ? 0 : 1);
        mask = mask >> 1;
    }
    printf("\n");
    return 0;
}

int bitprinter_2(unsigned long long int a)
{
	  printf("\n");
 	  unsigned long long int mask = (unsigned long long int)1 << 63;
    while (mask != 0)
 	  {
        printf("%d", (a & mask) == 0 ? 0 : 1);
        mask = mask >> 1;
    }
    printf("\n");
    printf("%llu", a);
    printf("\n");
    return 0;
}

int
main(void)
{
	  union bi test_1, test_2, test_3;
	  unsigned long long int t_1, t_2;
	  unsigned short int t_3;
	
	  test_1.b = 345.035;
	  printf("Firts test 0 <= X < 2^N \n");
	  printf("Before: ");
  	bitprinter_1(test_1);
	  t_1 = (unsigned long long int)test_1.b;
	  printf("After: ");
	  bitprinter_2(t_1);
	  printf("\n");
	  test_2.b = -250.0;
	  printf("Second test X < 0 \n");
	  printf("Before: ");
	  bitprinter_1(test_2);
	  t_2 = (unsigned long long int)test_2.b;
	  printf("After: ");
	  bitprinter_2(t_2);
	  printf("\n");
	  test_3.b = 72000.45;
	  printf("Third test X >= 2^N \n");
	  printf("Before: ");
	  bitprinter_1(test_3);
	  t_3 = (unsigned short int)test_3.b;
	  printf("After: ");
	  bitprinter_2(t_3);
	  return 0;
}