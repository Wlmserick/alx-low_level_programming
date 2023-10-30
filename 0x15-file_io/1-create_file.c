#include "main.h"

/**
 * create_file - creates file
 * @filename: name of the file used.
 * @text_content: content written.
 *
 * Return: 1 if successful. -1 if unsucessful.
 */
int create_file(const char *filename, char *text_content)
{
	int fr;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	fr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fr == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(fr, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(fr);

	return (1);
}
