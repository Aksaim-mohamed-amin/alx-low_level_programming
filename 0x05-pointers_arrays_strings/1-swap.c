/**
 * swap_int - main function
 *
 * Description: 'swap two variables'
 *
 * @a: first variable
 * @b: secend variable
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
