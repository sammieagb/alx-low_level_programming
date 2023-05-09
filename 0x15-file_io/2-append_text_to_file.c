#include "main.h"

/**
 * append_text_to_file - Appends txt at end of a file.
 * @filename: pointer 4 the name of the file.
 * @text_content: str to add At the end of the file.
 *
 * Return: If the procedure is unsuccessful or the filename NULL - -1.
 *     If the file is missing, the user doesn't have write access - -1.
 *     Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	w = write(p, text_content, len);

	if (p == -1 || w == -1)
		return (-1);

	close(p);

	return (1);
}

