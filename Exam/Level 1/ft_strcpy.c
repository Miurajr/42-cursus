#include <stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
	int i = -1;
	
	if (!dest || !src)
		return (0);
	while (src[++i])
		dest[i] == src[i];
	dest[i] = '\0';
	return(0);
}

int	main(void)
{
	char *dest;
	char *src = "Abacate verde";
	
	ft_strcpy(dest, src);
	printf("%s", dest);
	
	return (0);
}
