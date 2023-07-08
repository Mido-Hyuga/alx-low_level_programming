#include "main.h"
/**
* check_palindrome - string if a palindrome.
* @start: Int
* @end: Int
* @s: string
* Return: Integer
*/
int check_palindrome(int start, int end, char *s)
{
	if (start == end || start - 1 == end)
		return (1);
	if (*(s + start) == *(s + end))
		return (1 * check_palindrome(start + 1, end - 1, s));
	return (0);
}
/**
*_strlen_recursion - Return a length of a string.
*@s: string
*Return: nothings
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
/**
 * is_palindrome - Check a string is a palindrome.
 * @s: String
 * Return: Int
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s) - 1;
	int a = check_palindrome(0, len, s);

	if (a == 0)
		return (0);
	else
		return (1);
}
