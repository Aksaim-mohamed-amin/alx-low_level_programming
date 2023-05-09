#include "main.h"

/**
 *
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, biggest = 0, i = 0, rest = 0, sum = 0;

	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;

	biggest = len1 > len2 ? len1 : len2;

	if (biggest + 1 < size_r)
		return (0);

	r[biggest] = '\0';

	len1--, len2--, size_r--;

	while (biggest >= 0)
	{
		sum = rest;

		if (len1 >= 0)
			sum += n1[len1] - '0';

		if (len2 >= 0)
			sum += n2[len2] - '0';

		rest = sum / 10;
		sum %= 10;

		r[biggest] = sum + '0';

		len1--, len2--, size_r;
	}

	if (sum == 1)
}
