/**
* _strlen_recursion - main function
*
* Description: 'Get the length of a string using recursion'
*
* @s: string
*
* Return: The length of the string
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
