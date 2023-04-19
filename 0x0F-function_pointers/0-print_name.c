/**
 * print_name - main function
 * Description: Function pointer to print a name
 * @name: name to print
 * @f: function used to print the name
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
