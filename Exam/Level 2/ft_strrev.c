#include <stdio.h>

void ft_swap(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

char *ft_strrev(char *str)
{
	char *begin;
	char *end;

	begin = str;
	end = str;
	while (*end)
		end++;
	end--;
	while (begin < end)
	{
		ft_swap(begin, end);
		begin++;
		end--;
	}
	return (str);
}

int main()
{
  
  char *a = "teste";
  char *b;
  
  b = ft_strrev(a);
  
  printf("%s", b);

  return 0;
}
