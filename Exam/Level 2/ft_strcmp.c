#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	
	if (!s1 || !s2)
		return (0);
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
	}
	return (s1[i] - s2[i]);		
}
/*
int	main(void)
{
	char *a = "abcde";
	char *b = "abcd";

	printf("%d", ft_strcmp(a, b));
	return (0);
}
*/
