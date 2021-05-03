/**
 * _strlen_recursion - return length of string
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}

/**
 * check - helper function
 * @str: string
 * @len: length
 * @count: counter
 * Return: 1 if string is a palindrome, 0 if not
 */

int check(char *str, int len, int count)
{
	if (count < len && str[len] == str[count])
		return (check(str, len - 1, count + 1));
	if (count >= len)
		return (1);
	return (0);
}

/**
 * is_palindrome - checks if the string is a palindrome
 * @s:string to check
 * Return: 1 if string is palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int count = 0;

	return (check(s, len - 1, count));
}
