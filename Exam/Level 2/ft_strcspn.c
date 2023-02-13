#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int j = 0;
	
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

int	main(void)
{
	char *str = "abcdefgh";
	char *str1 = "f";
	
	printf("%ld\n", ft_strcspn(str, str1));
	printf("Original:%ld", strcspn(str, str1));
}
