#include <string.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int j = 0;
	
	if (!s1 || !s2)
		return (0);
	while (*s1)
	{
		j = 0;
		while(s2[j])
		{
			if (*s1 == s2[j])
				return (char *) s1;
			j++;
		}
		s1++;
	}
	return (0);
}

int main() {
  char str1[] = "Abacaxi do mato";
  char str2[] = "veado";
  char *result;
  char *myresult;

  result = strpbrk(str1, str2);
  myresult = ft_strpbrk(str1, str2);

  if (result) {
    printf("(ORIG)First occurrence of any character from '%s' in '%s' is '%c'\n", str2, str1, *result);
  } else {
    printf("None of the characters from '%s' was found in '%s'\n", str2, str1);
  }
  
   if (result) {
    printf("(MINE)First occurrence of any character from '%s' in '%s' is '%c'\n", str2, str1, *myresult);
  } else {
    printf("(MINE)None of the characters from '%s' was found in '%s'\n", str2, str1);
  }

  return 0;
}
