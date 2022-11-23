/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:00:53 by healexan          #+#    #+#             */
/*   Updated: 2022/11/22 18:20:23 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	words;
	int	signal;

	words = 0;
	signal = 0;
	while (*s)
	{
		if (*s != c && signal == 0)
		{
			signal = 1;
			words++;
		}
		else if (*s == c)
			signal = 0;
		s++;
	}
	return (words);
}

static int	count_letters(char const *s, char c, int i)
{
	int	letters;

	letters = 0;
	while (s[i] != c && s[i])
	{
		i++;
		letters++;
	}
	return (letters);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		sw;
	int		words;
	char	**ptr;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	ptr = (char **)malloc((words + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	sw = -1;
	i = 0;
	while (++sw < words)
	{
		while (s[i] == c)
			i++;
		ptr[sw] = ft_substr(s, i, count_letters(s, c, i));
		printf("%s\n", ptr[sw]);
		i += count_letters(s, c, i);
	}
	ptr[sw] = 0;
	return (ptr);
}

/* int    main(void)
{
	char *ptr = "mais de   uma      palavra   yyyy      ";
	char c = ' ';
	int i = 0;
	char **teste = ft_split(ptr, c);
	while (teste[i])
	{
		printf("%s\n", (teste[i]));
		i++;
	}
	
	
} */