/**
 * _islower - checks if a given character c is lowercase.
 *@c : The character to be chacked
 *
 *Return: 1 if c is lowercase
 *        0 otherwise
 */

int _islower(char c)
{
	if (c <= 'z' && c >= 'a')
		return (1);

	return (0);
}
