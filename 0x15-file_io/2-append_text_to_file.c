#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file to append to.
 * @text_content: the text to be appended.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	/* file descriptor */
	int filedes;
	/* number of bytes to write */
	int noBytes;
	/* number of letters */
	int noLetters;

	/* if filename is NULL, return -1 */
	if (!filename)
		return (-1);

	/* open file with write-only and append flags */
	filedes = open(filename, O_WRONLY | O_APPEND);

	/* if file descriptor is -1, return -1 */
	if (filedes == -1)
		return (-1);

	/* if text_content is not NULL */
	if (text_content)
	{
		/* count the number of letters */
		for (noLetters = 0; text_content[noLetters]; noLetters++)
			;

		/* write the text to the file */
		noBytes = write(filedes, text_content, noLetters);

		/* if number of bytes written is -1, return -1 */
		if (noBytes == -1)
			return (-1);
	}

	/* close file descriptor */
	close(filedes);

	/* return 1 on success */
	return (1);
}

