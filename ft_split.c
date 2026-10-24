/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdessamad <abdessamad@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 15:26:04 by abdessamad        #+#    #+#             */
/*   Updated: 2026/10/23 15:28:11 by abdessamad       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	char_is_here(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	len(char *str, int i, char *charset)
{
	int	size;

	size = 0;
	while (str[i] && !char_is_here(str[i], charset))
	{
		size++;
		i++;
	}
	return (size + 1);
}

int	count_strings(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && char_is_here(str[i], charset))
			i++;
		if (str[i] && !char_is_here(str[i], charset))
		{
			count++;
			while (str[i] && !char_is_here(str[i], charset))
				i++;
		}
	}
	return (count + 1);
}

char	*fill_word(char *str, int i, char *charset)
{
	char	*word;
	int		j;

	word = malloc(len(str, i, charset));
	if (!word)
		return (NULL);
	j = 0;
	while (str[i] && !char_is_here(str[i], charset))
	{
		word[j] = str[i];
		j++;
		i++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		k;
	char	**res;

	i = 0;
	k = 0;
	res = malloc((count_strings(str, charset)) * sizeof(char *));
	if (!res)
		return (NULL);
	while (str[i])
	{
		while (str[i] && char_is_here(str[i], charset))
			i++;
		if (str[i] && !char_is_here(str[i], charset))
			res[k++] = fill_word(str, i, charset);
		while (str[i] && !char_is_here(str[i], charset))
			i++;
	}
	res[k] = NULL;
	return (res);
}