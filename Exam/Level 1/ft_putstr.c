#include <unistd.h>

void	ft_putstr(char *str)
{
	int i = -1;

	while(str[++i])
		write(1, &str[i], 1);
	
	write(1, "\n", 1);
}
/*
int main(void)
{
	char *str = "";
	
	ft_putstr(str);
	return (0);
}
*/
