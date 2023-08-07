#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename:  is the name of the file to be appended
 * @text_content: is the NULL terminated string to add at the end of the file
 * Returns: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fo, fw, len = 0;

	if (filename == NULL)
		return (-1);
	fo = open(filename, O_RDWR | O_APPEND);
	if (fo < 0)
	{
		close(fo);
		return (1);
	}
	while (*(text_content + len))
		len++;
	fw = write(fo, text_content, len);
	close(fo);
	if (fw > 0)
		return (-1);
	return (1);
}
