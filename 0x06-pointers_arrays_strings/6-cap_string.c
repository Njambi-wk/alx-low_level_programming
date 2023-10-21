#include "main.h"
/**
 * cap_string - function that capitalizes all words
 * @s: ponter to string
 * Return: s
 */
char *cap_string(char *s)
{
	int n;
	/*n as the string count*/

	n = 0;
	while (s[n] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 12)
		{
			s[0] = s[0] - 32;
		}
		if (s[n] == ' ' || s[n] == '\t' || s[n] == '\n' || s[n] == ','
		|| s[n] == ';' || s[n] == '.' || s[n] == '!' || s[n] == '?'
		|| s[n] == '"' || s[n] == '(' || s[n] == ')' || s[n] == '{'
		|| s[n] == '}')
		{
			if (s[n + 1] >= 97 && s[n + 1] <= 122)
			{
				s[n + 1] = s[n + 1] - 32;
			}
		}
		n++;
	}
	return (s);
}
