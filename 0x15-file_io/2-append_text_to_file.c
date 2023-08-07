#include "main.h"
/**
* append_text_to_file - append text at the end of a file
* @filename: String
* @text_content: String
* Return: 1 or -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int opn, wr = 0;

	if (!filename)
		return (-1);
	opn = open(filename, O_APPEND | O_RDWR);
	if (opn < 0)
		return (-1);
	if (text_content)
		wr = write(opn, text_content, strlen(text_content));
	if (wr == -1)
		return (-1);
	return (1);
}
