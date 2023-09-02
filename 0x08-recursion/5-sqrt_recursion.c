/**
* test - Test numbers to see if they are the sqare root of m.
* @n: Testing number.
* @m: Number sqared.
* Return: Square root of the number.
*/
int test(int n, int m)
{
	int r = 0;

	if (n == 1)
	{
		return (1);
	}
	else if (n > m)
	{
		if ((n / m == m) && (n % m == 0))
		{
			return (m);
		}
		else
		{
			r = test(n, m + 1);
		}
	}
	else
	{
		return (-1);
	}
	return (r);
}

/**
* _sqrt_recursion - Returns the natural square root of a number.
* @n: Number to obtain the square root.
* Return: square root of the number.
*/
int _sqrt_recursion(int n)
{
	return (test(n, 1));
}
