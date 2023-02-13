#include <stdio.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return(i);
}
/*
int	main(void)
{
	char *str = "ab";
	
	printf("Lenght:%d\n", ft_strlen(str));
	return (0);
}
*/
