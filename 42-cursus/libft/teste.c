#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t n)
{
    size_t  i;
    int     j;
    i = 0;
    j = 0;
    if ((big) && n == 0)
        return (0);
    if (!little[j])
        return ((char *) big);
    while (big[i] && i < n)
    {
        if (little[j] == big[i])
        {
            while (little[j] && big[i + j] && i + j < n && big[i + j] == little[j])
                j++;
            if (little[j] == '\0')
                return ((char *)big + i);
        }
        i++;
        j = 0;
    }
    return (0);
}