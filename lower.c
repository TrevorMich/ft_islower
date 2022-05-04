#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
		return (c);
	}
	return (c);
}

int main(void)
{
	int i;

	i = 0;
	char c[]= "MY NAME";
	while (c[i] != '\0')
	{
		c[i] = ft_tolower(c[i]);
		i++;
	}
	printf("%s\n", c);
}
