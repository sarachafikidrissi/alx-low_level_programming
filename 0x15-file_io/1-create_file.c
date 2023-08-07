#include "main.h"
/**
 * create_file -  a function that creates a file
 * @filrname: the filename to create
 * @text_conternt: a NULL terminated string to write to the file
 * Returns: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
*/
int create_file(const char *filename, char *text_content)
{
	int fo,fw, len = 0;

	if (filename == NULL)
		return (-1);
	fo = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fo < 0)
		return (-1);
	while (text_content && *(text_content + len))
		len++;
	fw = write(fo, text_content, len);
	close (fo);
	if (fw < 0)
		return (-1);
	return (1);
}
