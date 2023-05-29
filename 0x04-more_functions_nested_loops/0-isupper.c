/**
* _isupper - check if a letter is uppercase
*
* @c: letter to check
*
* Return: 1 if the letter is uppercase 0 if not
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
