/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <cregazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:45:12 by cregazzo          #+#    #+#             */
/*   Updated: 2020/12/14 16:06:35 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			**ft_malloc_error(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static size_t		ft_wordcount(const char *s, char c)
{
	size_t			wordcount;
	int				i;

	i = 0;
	wordcount = 0;
	while (s && s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			wordcount++;
		i++;
	}
	return (wordcount);
}

static void			ft_next(char **next_str, size_t *len_word, char c)
{
	size_t			i;

	*next_str = *next_str + *len_word;
	*len_word = 0;
	i = 0;
	while (**next_str && **next_str == c)
		(*next_str)++;
	while ((*next_str)[i])
	{
		if ((*next_str)[i] == c)
			return ;
		(*len_word)++;
		i++;
	}
}

char				**ft_split(char const *s, char c)
{
	char			**tab;
	char			*next_str;
	size_t			len_word;
	size_t			nb_words;
	size_t			i;

	nb_words = ft_wordcount(s, c);
	if (!s || !(tab = (char **)malloc(sizeof(char *) * (nb_words + 1))))
		return (NULL);
	i = 0;
	next_str = (char *)s;
	len_word = 0;
	while (i < nb_words)
	{
		ft_next(&next_str, &len_word, c);
		if (!(tab[i] = (char *)malloc(sizeof(char) * (len_word + 1))))
			return (ft_malloc_error(tab));
		ft_strlcpy(tab[i], next_str, len_word + 1);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
