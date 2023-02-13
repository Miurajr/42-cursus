#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main(int argc, char **argv)
{
	int y;
	int x;
	int r;
	
	
	if (argc == 4)
	{
		x = atoi(argv[1]);
		y = atoi(argv[3]);
		if(argv[2][0]=='+')
			printf("%d", x + y);
		else if(argv[2][0]=='-')
			printf("%d", x - y);
			return (0);
		}
		else if(argv[2][0]=='/')
		{
			r = x / y;
			printf("%d", r);
			return (0);
		}
		else if (argv[2][0]=='*')
		{
			r = (x * y);
			printf("%d", r);
			return (0);
		}
		else if(argv[2][0]=='%')
		{
			r = x % y;
			printf("%d", r);
			return (0);
		}

	}
	write(1, "\n", 1);
	return(0);
}	

