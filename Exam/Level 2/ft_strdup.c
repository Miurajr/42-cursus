#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_strlen(char *s)
{
	int i = 0;
	while(s[i])
		i++;	
	return (i);
}

char    *ft_strdup(char *src)
{
	int i = -1;
	int len;
	char *dup;	
	
	len = ft_strlen(src);
	dup = malloc(sizeof(char) * len + 1); 
	while (src[++i])
	{
		dup[i] = src[i];
	}
	dup[i] = '\0';
	return (dup);
}

int main(void)
{
    char *original_string = "Abacate verde!";
    char *duplicated_string;
    char *mineduplicated_string;

    duplicated_string = strdup(original_string);
    mineduplicated_string = ft_strdup(original_string);
    if (duplicated_string == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
     else if (mineduplicated_string == NULL)
    {
        printf("My own memory allocation failed\n");
        return 1;
    }

    printf("Original string: %s\n", original_string);
    printf("Duplicated string: %s\n", duplicated_string);
    printf("My duplicated string: %s\n", mineduplicated_string);

    free(duplicated_string);
    free(mineduplicated_string);
    return 0;
}
