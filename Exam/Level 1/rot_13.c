#include <unistd.h>

void ft_putchar(int c)
{
	write(1, &c, 1);
}

int	rot_13(char c)
{
	int reference = 0;	
	
	if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
		c += 13;
	else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
		c -= 13;
	return (c)
}
}

int	main(int argc, char **argv)
{
	int i = -1;
	
	if (argc >= 1)
		while(argv[1][++i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
				reference += 
		}
}
