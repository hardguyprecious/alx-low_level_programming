#include "main.h"

/**
 * create_file - this creates a file
 * @filename: filename.
 * @text_content: the content written in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int filedes;       /* file descriptor */
	int noLetters;     /* number of letters in text_content */
	int noBytes;       /* number of bytes written */

	if (!filename)     /* check if filename is NULL */
		return (-1);

	filedes = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	/* open file with write-only mode, create if not exist */

	if (filedes == -1) /* check if open() fails */
		return (-1);

	if (!text_content) /* check if text_content is NULL */
		text_content = "";

	for (noLetters = 0; text_content[noLetters]; noLetters++)
		;             /* get number of letters in text_content */

	noBytes = write(filedes, text_content, noLetters);
	/* write the contents of text_content to the file */

	if (noBytes == -1) /* check if write() fails */
		return (-1);

	close(filedes);   /* close the file */

	return (1);       /* return success */
}

