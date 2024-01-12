#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nums;
	unsigned long fbnc1 = 0, fbnc2 = 1, result;
	unsigned long fbnc1_div1, fbnc1_div2, fbnc2_div1, fbnc2_div2;
	unsigned long div1, div2;

	for (nums = 0; nums < 92; nums++)
	{
		result = fbnc1 + fbnc2;
		printf("%lu, ", result);
		fbnc1 = fbnc2;
		fbnc2 = result;
	}
	fbnc1_div1 = fbnc1 / 10000000000;
	fbnc2_div1 = fbnc2 / 10000000000;
	fbnc1_div2 = fbnc1 % 10000000000;
	fbnc2_div2 = fbnc2 % 10000000000;
	for (nums = 93; nums < 99; nums++)
	{
		div1 = fbnc1_div1 + fbnc2_div1;
		div2 = fbnc1_div2 + fbnc2_div2;
		if (fbnc1_div2 + fbnc2_div2 > 9999999999)
		{
			div1 += 1;
			div2 %= 10000000000;
		}
		printf("%lu%lu", div1, div2);
		if (nums != 98)
			printf(", ");
		fbnc1_div1 = fbnc2_div1;
		fbnc1_div2 = fbnc2_div2;
		fbnc2_div1 = div1;
		fbnc2_div2 = div2;
	}
	printf("\n");
	return (0);
}
