#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fildes;  /* file descriptor */
	ssize_t nord, nowr;  /* number of bytes read/written */
	char *buffr;  /* buffer to hold read data */

	/* check for valid filename */
	if (!filename)
		return (0);

	/* open the file for reading */
	fildes = open(filename, O_RDONLY);

	/* check for errors during open */
	if (fildes == -1)
		return (0);

	/* allocate memory for buffer */
	buffr = malloc(sizeof(char) * (letters));
	if (!buffr)
		return (0);

	/* read data from file into buffer */
	nord = read(fildes, buffr, letters);

	/* write data from buffer to standard output */
	nowr = write(STDOUT_FILENO, buffr, nord);

	/* clean up */
	close(fildes);
	free(buffr);

	/* return the number of bytes written */
	return (nowr);
}

