#include <unistd.h>

void ft_printn(int number)
{
	char str[10] = "0123456789";
	
	if (number > 9)
		ft_printn(number / 10);
	write(1, &str[number % 10], 1);
}

int	main(void)
{
	int i = 0;
	
	while (i++ <= 99)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_printn(i);
		write(1, "\n", 1);
	}
	return (0);
}
