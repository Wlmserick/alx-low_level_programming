#include "main.h"

/**
 * read_textfile - read and print the letters
 * @filename: name of the file used.
 * @letters: number letters printed.
 *
 * Return: numbers of letters printed. If unsucessful, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fr;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fr = open(filename, O_RDONLY);

	if (fr == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fr, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fr);

	free(buf);

	return (nwr);
}
