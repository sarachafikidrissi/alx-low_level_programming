#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: pointer to the file to be reading
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fo, fr, fw;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fo = open(filename, O_RDONLY);
	if (fo < 0)
	{
		free(buffer);
		return (0);
	}
	fr = read(fo, buffer, letters);
	if (fr < 0)
	{
		free(buffer);
		return (0);
	}
	fw = write(STDOUT_FILENO, buffer, fr);
	free (buffer);
	close(fo);

	if (fw <0)
		return (0);
	return ((ssize_t)fw);
}
