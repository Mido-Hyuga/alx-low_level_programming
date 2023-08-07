#include "main.h"
/**
* create_file - Create a file
* @filename: file name
* @text_content: content file
* Return: 1 if success, else -1
*/
int create_file(const char *filename, char *text_content)
{
	int opn, wr;

	if (!filename)
		return (-1);
	opn = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (opn < 0)
		return (-1);
	if (text_content)
	{
		wr = write(opn, text_content, sizeof(char) * strlen(text_content));
		if (wr < 0)
			return (-1);
	}
	close(opn);
	return (1);
}
