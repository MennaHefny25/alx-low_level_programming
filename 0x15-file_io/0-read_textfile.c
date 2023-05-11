#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
<<<<<<< HEAD
	ssize_t o, r, w;
	char *buffer;
=======
	ssize_t r, w, o;
	char *fptr;
>>>>>>> c3b026d2dd9f68597a42e3cd9232b688c079cdb5

	if (filename == NULL)
		return (0);

<<<<<<< HEAD
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
=======
	fptr = malloc(sizeof(char) * letters);
	if (fptr == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(0, fptr, letters);
	w = write(STDOUT_FILENO, fptr, r);

	if (o == -1 || r == -1 || w != r)
	{
		return (0);
	}

	free(fptr);
>>>>>>> c3b026d2dd9f68597a42e3cd9232b688c079cdb5
	close(o);

	return (w);
}
