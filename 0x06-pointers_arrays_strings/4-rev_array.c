/**
 * reverse_array - main function
 *
 * Description: 'reverse the elements of an array'
 *
 * @a: array
 * @n: the number of the element in the array
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n - 1 - i);
		*(a + n - 1 - i) = tmp;
	}
}
