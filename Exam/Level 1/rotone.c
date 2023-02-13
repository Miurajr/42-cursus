#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **c)
{
	int i = 0;
	if (argc > 1)
	{	
		while (c[1][i])
		{
			if ((c[1][i] >= 'a' && c[1][i] <= 'y') || (c[1][i] >= 'A' && c[1][i] <= 'Y'))
				c[1][i] += 1;
			else if (c[1][i] == 'z'|| c[1][i] == 'Z')
				c[1][i] -= 25;
			ft_putchar(c[1][i]);
			i++;	
		}
	}
	ft_putchar('\n');	
}
