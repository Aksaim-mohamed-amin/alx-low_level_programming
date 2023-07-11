#include "main.h"

/**
 * append_text_to_file - Append test at the end of file.
 *
 * @filename: The name of the file.
 * @text_content: A NULL-terminated string to append at the end of the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, r_value;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		r_value = write(file, text_content, str_len(text_content));
		if (r_value == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);

	return (1);
}

/**
 * str_len - Calculate the lenght of a string
 *
 * @str: String
 * Return: The lengtht of the string
 */
int str_len(char *str)
{
	int len;

	for (len = 0; str[len]; len++)
		;

	return (len);
}
