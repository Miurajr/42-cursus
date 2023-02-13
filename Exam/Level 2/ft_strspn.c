#include <string.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int i;
	int flag;
	
	for (i = 0; s[i]; i++)
	{
		flag = 0;
		for (int j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			flag = 1;
		}
		if (!flag)
			return (i);
	}
	return (i);	
}

int main(void) {
char str1[] = "abcdefghijklmnopqrstuvwxyz";
char str2[] = "abcd";
int result;
int myresult;

myresult = ft_strspn(str1, str2);
result = strspn(str1, str2);
printf("(OR)str1 and str2 have %d common characters.\n", result);
printf("(MY)str1 and str2 have %d common characters.\n", myresult);

return 0;
}
